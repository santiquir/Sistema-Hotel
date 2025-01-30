#include "VentanaPrincipal.h"
#include "ListaHabitaciones.h"
#include "ListaHuespedes.h"
#include "GestionPersona.h"
#include "GestionHabitaciones.h"
#include "LoginTransaccion.h"
#include "GestionTransacciones.h"
#include "string_conv.h"

VentanaPrincipal::VentanaPrincipal(GestionPersonas *m_agenda,GestionHabitaciones *m_agendaHabitaciones,
		GestionTransacciones *m_transacciones, GestionCalendario *calendario) : vPrincipal(nullptr),m_agenda(m_agenda),
		m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones), 
		calendario(calendario){
	
	this->SetFocus();
	//CargarInformacion();
}

VentanaPrincipal::~VentanaPrincipal() {
	
}

void VentanaPrincipal::ClickBotonHabitacion( wxCommandEvent& event )  {
	ListaHabitaciones *win = new ListaHabitaciones(this,m_agendaHabitaciones, m_transacciones, m_agenda, calendario);
	win -> Show();
}

void VentanaPrincipal::ClickBotonHuesped( wxCommandEvent& event )  {
	ListaHuespedes *win = new ListaHuespedes(this,m_agenda, calendario);
	win -> Show();
}

void VentanaPrincipal::ClickBotonTransacciones( wxCommandEvent& event )  {
	LoginTransaccion *win = new LoginTransaccion(this,m_agendaHabitaciones,m_transacciones);
	win -> Show();
}

/*void VentanaPrincipal::CargarInformacion(){
	
	int cantidadHabitaciones = m_agendaHabitaciones->verCantidadHabitaciones();
	wxString texto = wxString::Format("Habitaciones: %d", cantidadHabitaciones);
	TextoCantidadHabitaciones->SetLabel(texto);
	
	int cantidadPersonas = m_agenda->CantidadDatos();
	texto = wxString::Format("Personas: %d", cantidadPersonas);
	TextoCantidadHuespedes->SetLabel(texto);
	
	int cantidadOcupadas = m_agendaHabitaciones->habitacionesOcupadas();
	texto = wxString::Format("Ocupadas: %d", cantidadOcupadas);
	TextoCantidadOcupadas->SetLabel(texto);
	
	int cantidadLibres= m_agendaHabitaciones->habitacionesLibres();
	texto = wxString::Format("Libres: %d", cantidadLibres);
	TextoCantidadLibres->SetLabel(texto);
}*/
