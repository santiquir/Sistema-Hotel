#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "GestionPersona.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"
#include "GestionCalendario.h"

class Application : public wxApp {
	GestionPersonas *m_agenda;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	GestionCalendario *calendario;
public:
	virtual bool OnInit();
};

#endif
