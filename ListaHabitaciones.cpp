#include "ListaHabitaciones.h"
#include "AgregarHabitacion.h"
#include <wx/msgdlg.h>
#include "Habitacion.h"
#include "ModificarHabitaciones.h"
#include "string_conv.h"
#include <sstream>
#include "Persona.h"
#include "CalendarioHabitaciones.h"
#include "GestionCalendario.h"

using namespace std;


ListaHabitaciones::ListaHabitaciones(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones,
		GestionTransacciones *m_transacciones, GestionPersonas *m_agenda, GestionCalendario *calendario) : listHabitaciones(parent),
		m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones), m_agenda(m_agenda),
		calendario(calendario){

	refrescarGrilla();
	refrescarSelector();
	
	
}

void ListaHabitaciones::refrescarGrilla(){
	if (GrillaHabitaciones->GetNumberRows() > 0) {
		GrillaHabitaciones->DeleteRows(0, GrillaHabitaciones->GetNumberRows());
	}
	indices.clear();
	
	for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &p = m_agendaHabitaciones->verHabitacion(i);
		GrillaHabitaciones->AppendRows();
		GrillaHabitaciones->SetCellValue(i,0,to_string(p.verNumero()));
		GrillaHabitaciones->SetCellValue(i,1,p.verTipo());
		GrillaHabitaciones->SetCellValue(i,2,"$"+FormatearNumero(p.verPrecio()));
		indices.push_back(i);
	}
	
}
void ListaHabitaciones::refrescarSelector() {
	SelectorHuesped->Clear();
	vector<string> datos;
	
	for (int i = 0; i < m_agenda->CantidadDatos(); i++) {
		Persona &p = m_agenda->verPersona(i);
		datos.push_back(p.verApellido() + ", " + p.verNombre());
	}
	
	for (const auto& dato : datos) {
		SelectorHuesped->Append(dato);
	}
}

void ListaHabitaciones::ClickBotonAgregarHabitacion( wxCommandEvent& event )  {
	AgregarHabitacion win(this,m_agendaHabitaciones,m_transacciones);
	if(win.ShowModal()==1)
		refrescarGrilla();
}

ListaHabitaciones::~ListaHabitaciones() {
	
}

void ListaHabitaciones::ClickBotonBuscarHabitacion( wxCommandEvent& event )  {
	string s;
	s = wx_to_std(BuscadorHabitaciones->GetValue());
	if(s.empty()) {refrescarGrilla();return;}
	if (GrillaHabitaciones->GetNumberRows() > 0) {
		GrillaHabitaciones->DeleteRows(0, GrillaHabitaciones->GetNumberRows());
	}
	indices.clear();
	
	int cont = 0;
	for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &p = m_agendaHabitaciones->verHabitacion(i);
		
		if(p.verTipo() == s or to_string(p.verNumero()) == s){
			GrillaHabitaciones->AppendRows();
			GrillaHabitaciones->SetCellValue(cont,0,to_string(p.verNumero()));
			GrillaHabitaciones->SetCellValue(cont,1,p.verTipo());
			GrillaHabitaciones->SetCellValue(cont,2,FormatearNumero(p.verPrecio()));
			cont++;
			indices.push_back(i);
		}
	}
}

void ListaHabitaciones::ClickBotonEliminarHabitacion( wxCommandEvent& event )  {
	
	int f = GrillaHabitaciones->GetGridCursorRow();
	int x = wxMessageBox("Estas seguro?","Advertecia",wxYES_NO|wxICON_QUESTION);
	
	if(x == wxYES){
		int ind = indices[f];
		m_agendaHabitaciones->eliminarHabitacion(ind);
		indices.erase(indices.begin()+f);
		m_agendaHabitaciones->guardar();
		GrillaHabitaciones->DeleteRows(f);
		refrescarGrilla();
	}
}

void ListaHabitaciones::ClickBotonReservar(wxCommandEvent& event) {
	long numero;
	//validacion numero
	if (!InputAgregarHabitacion->GetValue().ToLong(&numero) || numero < 0) {
		wxMessageBox("Por favor, ingrese un número válido.", "Error", wxICON_ERROR);
		return;
	}
	
	//validacion huesped
	if(SelectorHuesped->GetStringSelection().IsEmpty()){
		wxMessageBox("Por favor, ingrese un huesped.", "Error", wxICON_ERROR);
		return;
	}
	
	//validacion de habitacion unica por huesped
	string nombreCompleto = wx_to_std(SelectorHuesped->GetStringSelection());
	if(m_agenda->repetirHabitacion(nombreCompleto)){
		wxMessageBox("El huesped ingresado ya posee una habitacion.", "Error", wxICON_ERROR);
		return;
	}
	
	//validar que se encuentre la habitacion en el sistema
	bool esta = false; long monto = 0, monto_parcial = 0;
	for (int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones(); i++) {
		if (m_agendaHabitaciones->verHabitacion(i).verNumero() == numero) {
			esta = true;
			Habitacion &hab = m_agendaHabitaciones->verHabitacion(i);
			monto = hab.verPrecio();
			monto_parcial = monto * 0.3;
			break;
		}
	}
	
	if (!esta) {
		wxMessageBox("La habitación no existe.", "Error", wxICON_ERROR);
		return;
	}
	
	
	wxDateTime entrada = FechaEntrada->GetValue();
	wxDateTime salida = FechaSalida->GetValue();
	wxDateTime actual = wxDateTime::Now();
	
	//entrada que no sea mayor a la salida
	if(entrada.GetTicks() > salida.GetTicks()){
		wxMessageBox("Las fechas no son validas.", "Error", wxICON_ERROR);
		return;
	}
	
	//la entrada anterior a la fecha actual
	if(entrada.GetTicks() < actual.GetTicks()){
		wxMessageBox("La fecha de entrada es antigua.", "Error", wxICON_ERROR);
		return;
	}
	
	//validar solapamiento de fechas
	const auto& reservas = calendario->ObtenerReservas(numero);
	for (const auto& reserva : reservas) {
		if (!(salida.GetTicks() <= reserva.fechaEntrada.GetTicks() || 
			  entrada.GetTicks() >= reserva.fechaSalida.GetTicks())) {
			wxMessageBox("La habitación ya está reservada en esas fechas.", "Error", wxICON_ERROR);
			return;
		}
	}
	
		
	string motivo = "Reserva de la habitacion " + to_string(numero) + "(adelanto del 30%)" ;
	m_transacciones->agregarHistorial(motivo,monto_parcial,true);
	m_transacciones->GuardarActividad();
		
	string nombre,apellido;
		
	for(int i = 0; m_agenda->CantidadDatos();i++){
		Persona &p = m_agenda->verPersona(i); 
		
		size_t pos = nombreCompleto.find(',');
		if (pos != string::npos) {
			apellido = nombreCompleto.substr(0, pos); 
			nombre = nombreCompleto.substr(pos + 2);
		}
			
		if(p.verApellido() == apellido && p.verNombre() == nombre){
			p.modificarHab(to_string(numero));
			p.modificarFechaReserva(entrada,salida);
			break;
		}
		
	}
	
	m_agenda->Guardar();
	m_agendaHabitaciones->guardar();
	calendario->AgregarReserva(entrada,salida,numero);
	calendario->GuardarEnArchivo();
	InputAgregarHabitacion->Clear();
		
		
	wxMessageBox("Reserva realizada con exito","Exelente",wxICON_INFORMATION);
	refrescarGrilla();
	
}

void ListaHabitaciones::ClickBotonQuitarReserva( wxCommandEvent& event )  {
	long numero;
	
	if (!InputAgregarHabitacion->GetValue().ToLong(&numero)) {
		wxMessageBox("Por favor, ingrese un número válido.", "Error", wxICON_ERROR);
		return;
	}
	
	if (numero < 0) {
		wxMessageBox("La habitación no existe.", "Error", wxICON_ERROR);
		return;
	}
	
	bool esta = false;
	for (int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones(); i++) {
		if (m_agendaHabitaciones->verHabitacion(i).verNumero() == numero) {
			esta = true;
			break;
		}
	}
	
	if (!esta) {
		wxMessageBox("La habitación no existe.", "Error", wxICON_ERROR);
		return;
	}
	
	wxDateTime entrada = FechaEntrada->GetValue();
	wxDateTime salida = FechaSalida->GetValue();
	wxDateTime actual = wxDateTime::Now();
	
	//entrada que no sea mayor a la salida
	if(entrada.GetTicks() > salida.GetTicks()){
		wxMessageBox("Las fechas no son validas.", "Error", wxICON_ERROR);
		return;
	}
	
	bool fecha_esta = false;
	const auto& reservas = calendario->ObtenerReservas(numero);
	for(auto reserva : reservas){
		if(reserva.fechaEntrada == entrada){
			fecha_esta = true;
		}
	}
	
	if(SelectorHuesped->GetStringSelection().IsEmpty()){
		wxMessageBox("Por favor, ingrese un huesped.", "Error", wxICON_ERROR);
		return;
	}
	string quitarPersona = wx_to_std(SelectorHuesped->GetStringSelection());
	string apellido, nombre;
	size_t pos = quitarPersona.find(',');
	if (pos != string::npos) {
		apellido = quitarPersona.substr(0, pos); 
		nombre = quitarPersona.substr(pos + 2);
	}
	
	if(fecha_esta){
		for(int i = 0; i < m_agenda->CantidadDatos();i++){
			Persona &p = m_agenda->verPersona(i);
			if(p.verHab() == to_string(numero) && p.verNombre() == nombre && p.verApellido() == apellido){
				p.modificarHab("-");
				p.modificarFechaReserva(wxDateTime::Now(),wxDateTime::Now());
				if(p.verEstado()){
					p.modificarEstado();
				}
			}
		}
		
		calendario->QuitarReserva(entrada,numero);
		calendario->GuardarEnArchivo();
		wxMessageBox("Se ha quitado la reserva con exito.", "Éxito", wxICON_INFORMATION);
		m_agenda->Guardar();
		m_agendaHabitaciones->guardar();
		InputAgregarHabitacion->Clear();
		refrescarGrilla();
	}else
		wxMessageBox("La fecha de entrada ingresada no coincide con ninguna antes reservada","Error",wxICON_INFORMATION);
	
}

void ListaHabitaciones::ClickBotonModificarHabitacion( wxCommandEvent& event )  {
	int f = GrillaHabitaciones->GetGridCursorRow();
	
	if (f == wxNOT_FOUND) { 
		wxMessageBox("Por favor, selecciona un huésped para modificar.", "Error", wxICON_ERROR);
		return;
	}
	int ind = indices[f];
	Habitacion* aModificar = &m_agendaHabitaciones->verHabitacion(ind);
	
	ModificarHabitaciones win(this,aModificar,m_agendaHabitaciones);
	if(win.ShowModal()==1) refrescarGrilla();
}

void ListaHabitaciones::ClickBotonCalendario( wxCommandEvent& event )  {
	CalendarioHabitaciones *win = new CalendarioHabitaciones(this,calendario,m_agendaHabitaciones,m_agenda,m_transacciones);
	win -> Show();
}

string ListaHabitaciones::FormatearNumero(long numero) {
	std::string numeroStr = std::to_string(numero); 
	int n = numeroStr.length();
	
	
	for (int i = n - 3; i > 0; i -= 3) {
		numeroStr.insert(i, ",");
	}
	return numeroStr;
}

