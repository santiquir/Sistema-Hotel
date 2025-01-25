#include "ListaHabitaciones.h"
#include "AgregarHabitacion.h"
#include <wx/msgdlg.h>
#include "Habitacion.h"
#include "ModificarHabitaciones.h"
#include "string_conv.h"
#include <sstream>
#include "Persona.h"
using namespace std;


ListaHabitaciones::ListaHabitaciones(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones,
		GestionTransacciones *m_transacciones, GestionPersonas *m_agenda) : listHabitaciones(parent),
		m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones), m_agenda(m_agenda){
	

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
		GrillaHabitaciones->SetCellValue(i,2,"$"+to_string(p.verPrecio()));
		string s;
		if(p.verEstado()==true) s = "Ocupado";
		else s = "Libre";
		GrillaHabitaciones->SetCellValue(i,3,s);
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
		
		string est;
		if(p.verEstado() == true) est = "Ocupado";
		else est = "Libre";
		
		if(p.verTipo() == s or to_string(p.verNumero()) == s or est == s){
			GrillaHabitaciones->AppendRows();
			GrillaHabitaciones->SetCellValue(cont,0,to_string(p.verNumero()));
			GrillaHabitaciones->SetCellValue(cont,1,p.verTipo());
			GrillaHabitaciones->SetCellValue(cont,2,to_string(p.verPrecio()));
			string s;
			if(p.verEstado()==true) s = "Ocupado";
			else s = "Libre";
			GrillaHabitaciones->SetCellValue(cont,3,s);
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
	
	if (!InputAgregarHabitacion->GetValue().ToLong(&numero)) {
		wxMessageBox("Por favor, ingrese un número válido.", "Error", wxICON_ERROR);
		return;
	}
	
	if (numero < 0) {
		wxMessageBox("La habitación no existe.", "Error", wxICON_ERROR);
		return;
	}
	
	if(SelectorHuesped->GetStringSelection().IsEmpty()){
		wxMessageBox("Por favor, ingrese un huesped.", "Error", wxICON_ERROR);
		return;
	}
	
	bool esta = false; long monto = 0;
	for (int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones(); i++) {
		if (m_agendaHabitaciones->verHabitacion(i).verNumero() == numero) {
			esta = true;
			Habitacion &hab = m_agendaHabitaciones->verHabitacion(i);
			monto = hab.verPrecio();
			break;
		}
	}
	
	if (!esta) {
		wxMessageBox("La habitación no existe.", "Error", wxICON_ERROR);
		return;
	}
	
	if (m_agendaHabitaciones->reservar(numero)) {
		wxMessageBox("Reserva realizada con éxito.", "Éxito", wxICON_INFORMATION);
		m_agendaHabitaciones->guardar();
		
		
		string motivo = "Reserva de la habitacion " + to_string(numero);
		m_transacciones->agregarHistorial(motivo,monto,true);
		m_transacciones->GuardarActividad();
		
		string nombre,apellido;
		string nombreCompleto = wx_to_std(SelectorHuesped->GetStringSelection());
		for(int i = 0; m_agenda->CantidadDatos();i++){
			Persona &p = m_agenda->verPersona(i); 
			
			size_t pos = nombreCompleto.find(',');
			if (pos != string::npos) {
				apellido = nombreCompleto.substr(0, pos); 
				nombre = nombreCompleto.substr(pos + 2);
			}
			
			if(p.verApellido() == apellido && p.verNombre() == nombre){
				p.modificarHab(to_string(numero));
				break;
			}
			
		}
		
		m_agenda->Guardar();
		InputAgregarHabitacion->Clear();
		SelectorHuesped->Clear();
		refrescarGrilla();
	} else {
		wxMessageBox("La habitación ya está ocupada.", "Error", wxICON_ERROR);
	}
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
	
	if (m_agendaHabitaciones->quitarReserva(numero)) {
		wxMessageBox("Se ha quitado la reserva con exito.", "Éxito", wxICON_INFORMATION);
		
		for(int i = 0; i < m_agenda->CantidadDatos();i++){
			Persona &p = m_agenda->verPersona(i);
			if(p.verHab() == to_string(numero)){
				p.modificarHab("-");
			}
		}
		
		m_agenda->Guardar();
		m_agendaHabitaciones->guardar();
		InputAgregarHabitacion->Clear();
		refrescarGrilla();
	} else {
		wxMessageBox("Habitacion no reservada", "Error", wxICON_ERROR);
	}
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

