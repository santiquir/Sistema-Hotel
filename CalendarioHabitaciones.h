#ifndef CALENDARIOHABITACIONES_H
#define CALENDARIOHABITACIONES_H
#include "wxfb_project.h"
#include "GestionCalendario.h"
#include "GestionHabitaciones.h"

class CalendarioHabitaciones : public Calendario {
	
private:
	GestionCalendario *calendario;
	GestionHabitaciones *m_agendaHabitaciones;
protected:
	void ClickBotonBuscarReservas( wxCommandEvent& event )  override;
	
public:
	CalendarioHabitaciones(wxWindow *parent, GestionCalendario *calendario, GestionHabitaciones *m_agendaHabitaciones);
	~CalendarioHabitaciones();
	void refrescarCalendario();
	void refrescarSelector();
};

#endif

