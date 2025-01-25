#include <wx/image.h>
#include "Application.h"
#include "VentanaPrincipal.h"
#include "GestionPersona.h"
#include "GestionHabitaciones.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	
	m_agenda = new GestionPersonas("datosHuespedes.dat");
	m_agendaHabitaciones = new GestionHabitaciones("datosHabitaciones.dat");
	m_transacciones = new GestionTransacciones("datosTransacciones.dat","datosActividad.dat");
	wxInitAllImageHandlers();
	VentanaPrincipal *win = new VentanaPrincipal(m_agenda,m_agendaHabitaciones,m_transacciones);
	win->Show();
	return true;
}

