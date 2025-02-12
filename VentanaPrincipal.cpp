#include "VentanaPrincipal.h"
#include "ListaHabitaciones.h"
#include "ListaHuespedes.h"
#include "GestionPersona.h"
#include "GestionHabitaciones.h"
#include "LoginTransaccion.h"
#include "GestionTransacciones.h"
#include "string_conv.h"
#include "ReservasHabitaciones.h"

VentanaPrincipal::VentanaPrincipal(GestionPersonas *m_agenda,GestionHabitaciones *m_agendaHabitaciones,
		GestionTransacciones *m_transacciones, GestionCalendario *calendario) : vPrincipal(nullptr),m_agenda(m_agenda),
		m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones), 
		calendario(calendario){
	
	//Para que el cursor no tenga el foco en nada
	this->SetFocus();
}


void VentanaPrincipal::ClickBotonHabitacion( wxCommandEvent& event )  {
	ListaHabitaciones *win = new ListaHabitaciones(this,m_agendaHabitaciones, m_transacciones);
	win -> Show();
}

void VentanaPrincipal::ClickBotonHuesped( wxCommandEvent& event )  {
	ListaHuespedes *win = new ListaHuespedes(this,m_agenda,calendario);
	win -> Show();
}

void VentanaPrincipal::ClickBotonTransacciones( wxCommandEvent& event )  {
	LoginTransaccion *win = new LoginTransaccion(this,m_agendaHabitaciones,m_transacciones, calendario);
	win -> Show();
}


void VentanaPrincipal::ClickBotonReservas( wxCommandEvent& event )  {
	ReservasHabitaciones *win = new ReservasHabitaciones(this,m_agendaHabitaciones,m_transacciones, m_agenda,calendario);
	win -> Show();
}

VentanaPrincipal::~VentanaPrincipal() {
	
}
