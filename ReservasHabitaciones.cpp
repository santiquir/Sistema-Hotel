#include "ReservasHabitaciones.h"
#include <wx/msgdlg.h>
#include "string_conv.h"
#include "CalendarioHabitaciones.h"
#include <algorithm>
#include <wx/utils.h>
using namespace std;

ReservasHabitaciones::ReservasHabitaciones(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones,
				GestionTransacciones *m_transacciones, GestionPersonas *m_agenda, GestionCalendario *calendario) :
	ReservasHab(parent), m_agendaHabitaciones(m_agendaHabitaciones),m_transacciones(m_transacciones),
	m_agenda(m_agenda), calendario(calendario){
	
	refrescarSelectorHabitaciones();
	refrescarSelectorHuespedes();
	m_panel->Hide();
	listaHab->Hide();
	BotonAplicar->Hide();
	textinvisible->Hide();
}

void ReservasHabitaciones::ClickBotonDesplegarPanel(wxCommandEvent& event) {
	if (m_panel->IsShown())
		m_panel->Hide();
	else
		m_panel->Show();
	
	if (textinvisible->IsShown())
		textinvisible->Hide();
	else
		textinvisible->Show();
	
	if (listaHab->IsShown())
		listaHab->Hide();
	
	if (BotonAplicar->IsShown())
		BotonAplicar->Hide();
	else
		BotonAplicar->Show();
	
	Layout();
}

void ReservasHabitaciones::ClickBotonCalendario( wxCommandEvent& event )  {
	CalendarioHabitaciones *win = new CalendarioHabitaciones(this,calendario,m_agendaHabitaciones,m_agenda,m_transacciones);
	win -> Show();
}

void ReservasHabitaciones::refrescarSelectorHuespedes() {
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

void ReservasHabitaciones::refrescarSelectorHabitaciones(){
	SelectorHabitacion->Clear();
	for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
		SelectorHabitacion->Append(to_string(h.verNumero()));
	}
}

void ReservasHabitaciones::ClickBotonReservar(wxCommandEvent& event) {
	long numero;
	if (!SelectorHabitacion->GetStringSelection().ToLong(&numero) || numero < 0) {
		wxMessageBox("Por favor, ingrese un número válido.", "Error", wxICON_ERROR);
		return;
	}
	
	//se toman las fechas ingresadas
	wxDateTime entrada = FechaEntrada->GetValue();
	wxDateTime salida = FechaSalida->GetValue();
	wxDateTime actual = wxDateTime::Today();
	
	if (entrada.GetTicks() > salida.GetTicks()) {
		wxMessageBox("Las fechas no son válidas.", "Error", wxICON_ERROR);
		return;
	}
	
	if (entrada.GetTicks() < actual.GetTicks()) {
		wxMessageBox("La fecha de entrada es antigua.", "Error", wxICON_ERROR);
		return;
	}
	
	bool esta = false;
	long monto = 0, monto_parcial = 0;
	Habitacion* hab = nullptr; 
	
	//Busca la habitacion
	for (int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones(); i++) {
		if (m_agendaHabitaciones->verHabitacion(i).verNumero() == numero) {
			esta = true;
			hab = &m_agendaHabitaciones->verHabitacion(i);
			monto = hab->verPrecio();
			monto_parcial = monto * 0.3;
			break;
		}
	}
	
	if (!esta) {
		wxMessageBox("La habitación no existe.", "Error", wxICON_ERROR);
		return;
	}
	
	// Verifica si la habitación ya está reservada en esas fechas
	const auto& reservasExistentes = calendario->ObtenerReservas(numero);
	for (const auto& reserva : reservasExistentes) {
		if (!(salida < reserva.fechaEntrada || entrada > reserva.fechaSalida)) {
			wxMessageBox("La habitación ya está reservada en el rango de fechas seleccionado.", "Error", wxICON_ERROR);
			return;
		}
	}
	
	
	// Verificar si hay huéspedes temporales antes de proceder con la reserva
	if (habitacionSeleccionada != numero || huespedesTemporales.empty()) {
		wxMessageBox("No se ha agregado ningún huésped a la habitación.", "Error", wxICON_ERROR);
		return;
	}
	
	
	//Agregar los huéspedes temporalmente a la habitación y actualizar sus datos
	bool nuevoTitular = false;
	for (const string& huesped : huespedesTemporales) {
		
		string nombre, apellido;
		size_t pos = huesped.find(',');
		if (pos != string::npos) {
			apellido = huesped.substr(0, pos);
			nombre = huesped.substr(pos + 2);
		} else {
			apellido = huesped;  // En caso de que no tenga coma
		}
		
		for (int j = 0; j < m_agenda->CantidadDatos(); j++) {
			Persona& p = m_agenda->verPersona(j);
			
			if (p.verApellido() == apellido && p.verNombre() == nombre) {
				
				if(p.verEstadoTieneHabitacion()){
					wxMessageBox("El huesped ingresado ya presenta una habitacion","Error",wxICON_ERROR);
					return;
				}
				
				if(!nuevoTitular){
					p.modificarRol("Titular");
					nuevoTitular = true;
				}
				else if(nuevoTitular){
					p.modificarRol("Acompanante");
				}
				
				p.modificarHab(to_string(numero));
				p.modificarFechaReserva(entrada, salida);
				p.modificarEstadoTieneHabitacion();
				break;
			}
		}
	}
	
	// Limpiar lista de huéspedes temporales y resetear la habitación seleccionada
	huespedesTemporales.clear();
	habitacionSeleccionada = -1;
	
	// Registrar la transacción
	string motivo = "Reserva de la habitación " + to_string(numero) + " (adelanto del 30%)";
	wxDateTime a = wxDateTime::Now();
	m_transacciones->agregarHistorial(motivo, monto_parcial, true, a);
	m_transacciones->GuardarActividad();
	
	// Guardar datos finales
	m_agenda->Guardar();
	m_agendaHabitaciones->guardar();
	calendario->AgregarReserva(entrada, salida, numero);
	calendario->GuardarEnArchivo();
	
	wxMessageBox("Reserva realizada con éxito", "Excelente", wxICON_INFORMATION);
}

void ReservasHabitaciones::ClickBotonQuitarReserva(wxCommandEvent& event) {
	long numero;
	
	if (!SelectorHabitacion->GetStringSelection().ToLong(&numero) || numero < 0) {
		wxMessageBox("Por favor, ingrese un número válido.", "Error", wxICON_ERROR);
		return;
	}
	
	bool esta = false;
	Habitacion* hab = nullptr;
	
	// Buscar la habitación
	for (int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones(); i++) {
		Habitacion& h = m_agendaHabitaciones->verHabitacion(i);
		if (h.verNumero() == numero) {
			esta = true;
			hab = &h;
			if (h.verEstado()) {
				h.actualizarEstado(); // Cambia el estado de la habitación si es necesario
			}
			break;
		}
	}
	
	if (!esta) {
		wxMessageBox("La habitación no existe.", "Error", wxICON_ERROR);
		return;
	}
	
	wxDateTime entrada = FechaEntrada->GetValue();
	wxDateTime salida = FechaSalida->GetValue();
	entrada.ResetTime();
	salida.ResetTime();
	
	if (entrada.IsLaterThan(salida)) {
		wxMessageBox("Las fechas no son válidas.", "Error", wxICON_ERROR);
		return;
	}
	
	// Buscar si la fecha está registrada en el calendario
	bool fecha_esta = false;
	const auto& reservas = calendario->ObtenerReservas(numero);
	
	for (const auto& reserva : reservas) {
		if (reserva.fechaEntrada.IsEqualTo(entrada) && reserva.fechaSalida.IsEqualTo(salida)) {
			fecha_esta = true;
			break;
		}
	}
	
	if (!fecha_esta) {
		wxMessageBox("La fecha de entrada ingresada no coincide con ninguna antes reservada", "Error", wxICON_INFORMATION);
		return;
	}
	
	// Obtener el huésped a eliminar
	string quitarPersona = wx_to_std(SelectorHuesped->GetStringSelection());
	string apellido, nombre;
	size_t pos = quitarPersona.find(',');
	
	if (pos != string::npos) {
		apellido = quitarPersona.substr(0, pos);
		nombre = quitarPersona.substr(pos + 2);
	} else {
		apellido = quitarPersona;
	}
	
	// Buscar y modificar la persona seleccionada
	for (int i = 0; i < m_agenda->CantidadDatos(); i++) {
		Persona& p = m_agenda->verPersona(i);
		
		if (p.verHab() == to_string(numero) && p.verNombre() == nombre && p.verApellido() == apellido) {
			p.modificarHab("-");  
			p.modificarFechaReserva(wxDateTime::Now(), wxDateTime::Now());  
			p.modificarEstadoTieneHabitacion(); 
			p.modificarRol("-");
			if (p.verEstadoReservo_ocupo()) {
				p.modificarReservo_ocupo();
			}
			
			// Verificar si hay más acompañantes en la misma fecha
			for (int j = 0; j < m_agenda->CantidadDatos(); j++) {
				Persona& h = m_agenda->verPersona(j);
				pair<wxDateTime, wxDateTime> f = h.verFechaReserva();
				wxDateTime entradaAcompanante = f.first;
				wxDateTime salidaAcompanante = f.second;
				entradaAcompanante.ResetTime();
				salidaAcompanante.ResetTime();
				
				if (h.verHab() == to_string(numero) && entradaAcompanante.IsEqualTo(entrada) && salidaAcompanante.IsEqualTo(salida)) {
					// Si el acompañante tiene la misma reserva, se le quita tambien
					h.modificarHab("-");  
					h.modificarFechaReserva(wxDateTime::Now(), wxDateTime::Now());  
					h.modificarEstadoTieneHabitacion();  
					h.modificarRol("-");
					if (h.verEstadoReservo_ocupo()) {
						h.modificarReservo_ocupo();
					}
				}
			}
			
			m_agenda->Guardar();
			break;
		}
	}
	
	m_agendaHabitaciones->guardar();
	
	// Quitar la reserva del calendario si no hay más huéspedes
	calendario->QuitarReserva(entrada, numero);
	calendario->GuardarEnArchivo();
	
	wxMessageBox("Se ha quitado la reserva con éxito.", "Éxito", wxICON_INFORMATION);
}

void ReservasHabitaciones::ClickBotonAgregarPersona(wxCommandEvent& event) {
	long numeroHabitacion;
	if (!SelectorHabitacion->GetStringSelection().ToLong(&numeroHabitacion)) {
		wxMessageBox("Seleccione una habitación para agregar los huéspedes", "Error", wxICON_ERROR);
		return;
	}
	
	string nombreHuesped = wx_to_std(SelectorHuesped->GetStringSelection());
	if (nombreHuesped.empty()) {
		wxMessageBox("Seleccione un huésped para agregar", "Error", wxICON_ERROR);
		return;
	}
	
	for(size_t i = 0; i < huespedesTemporales.size();i++){
		if(huespedesTemporales[i] == nombreHuesped){
			wxMessageBox("Huesped ya agregado","Error",wxICON_ERROR);
			return;
		}
	}
	
	//Verifica si la habitacion presenta lugar todavia
	for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
		if(h.verCapacidad() == huespedesTemporales.size()){
			wxMessageBox("La habitacion se encuentra llena","Error",wxICON_ERROR);
			return;
		}
	}
	// Si pasa las verificaciones agrega el huésped al vector temporal
	huespedesTemporales.push_back(nombreHuesped);
	habitacionSeleccionada = numeroHabitacion;
	
	wxMessageBox("Huésped agregado temporalmente. Confirme la reserva para guardar los cambios.", 
				 "Información", wxICON_INFORMATION);
}

//Le da un mejor formato a los precios que aparecen en la grilla
string ReservasHabitaciones::FormatearNumero(long numero){
	string numeroStr = to_string(numero); 
	int n = numeroStr.length();
	
	
	for (int i = n - 3; i > 0; i -= 3) {
		numeroStr.insert(i, ",");
	}
	return numeroStr;
}

void ReservasHabitaciones::ClickBotonAplicarFiltro( wxCommandEvent& event )  {
	
	//filtro habitaciones
	vector<Habitacion> filtroHabitacions;
	if(checkReservadas->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verEstado() == false && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	if(checkOcupadas->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verEstado() == true && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	if(checkMenosSi->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verPrecio() <= 7500 && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	if(checkMasSi->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verPrecio() >= 7500 && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	if(checkSimples->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verTipo() == "Simple" && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	if(checkDobles->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verTipo() == "Doble" && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	if(checkVip->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verTipo() == "Vip" && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	if(checkCapacidadMasCuatro->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verCapacidad() >= 4 && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	if(checkCapacidadMenosCuatro->IsChecked()){
		for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
			Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
			auto it = find(filtroHabitacions.begin(),filtroHabitacions.end(),h);
			if(h.verCapacidad() <= 4 && it == filtroHabitacions.end()){
				filtroHabitacions.push_back(h);
			}
		}
	}
	
	sort(filtroHabitacions.begin(), filtroHabitacions.end());
	
	if(listaHab->GetNumberRows() > 0)
		listaHab->DeleteRows(0,listaHab->GetNumberRows());
	
	for(int i = 0; i < filtroHabitacions.size();i++){
		listaHab->AppendRows();
		listaHab->SetCellValue(i,0,to_string(filtroHabitacions[i].verNumero()));
		listaHab->SetCellValue(i,1,filtroHabitacions[i].verTipo());
		listaHab->SetCellValue(i,2,"$" + FormatearNumero(filtroHabitacions[i].verPrecio()));
		listaHab->SetCellValue(i,3,to_string(filtroHabitacions[i].verCapacidad()));
	}
	if(!filtroHabitacions.empty())
		listaHab->Show();
	else
		listaHab->Hide();
	
	
	if(checkAplicarFiltros->IsChecked()){
		//filtro de personas, si se aplican filtros a las reservas
		vector<Persona> filtroPersonas;
		SelectorHabitacion->Clear(); SelectorHuesped->Clear();
		for(int i = 0; i < filtroHabitacions.size();i++){
			SelectorHabitacion->Append(to_string(filtroHabitacions[i].verNumero()));
		}
		if(filtroHabitacions.empty()){
			for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
				Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
				SelectorHabitacion->Append(to_string(h.verNumero()));
			}
		}
		
		if(checkSinReservas->IsChecked()){
			for(int i = 0; i < m_agenda->CantidadDatos();i++){
				Persona &p = m_agenda->verPersona(i);
				auto it = find(filtroPersonas.begin(),filtroPersonas.end(),p);
				if(p.verEstadoTieneHabitacion() == false && it == filtroPersonas.end()){
					filtroPersonas.push_back(p);
				}
			}
		}
		if(checkConReservas->IsChecked()){
			for(int i = 0; i < m_agenda->CantidadDatos();i++){
				Persona &p = m_agenda->verPersona(i);
				auto it = find(filtroPersonas.begin(),filtroPersonas.end(),p);
				if(p.verEstadoReservo_ocupo() == false && p.verEstadoTieneHabitacion() == true && it == filtroPersonas.end()){
					filtroPersonas.push_back(p);
				}
			}
		}
		if(checkOcupando->IsChecked()){
			for(int i = 0; i < m_agenda->CantidadDatos();i++){
				Persona &p = m_agenda->verPersona(i);
				auto it = find(filtroPersonas.begin(),filtroPersonas.end(),p);
				if(p.verEstadoReservo_ocupo() == true && p.verEstadoTieneHabitacion() == true && it == filtroPersonas.end()){
					filtroPersonas.push_back(p);
				}
			}
		}
		
		for(int i = 0; i < filtroPersonas.size();i++){
			SelectorHuesped->Append(filtroPersonas[i].verApellido() + ", " + filtroPersonas[i].verNombre());
		}
	}
	
	if(!checkAplicarFiltros->IsChecked()){
		refrescarSelectorHabitaciones();
		refrescarSelectorHuespedes();
	}
	
	Layout();
}

ReservasHabitaciones::~ReservasHabitaciones() {}
