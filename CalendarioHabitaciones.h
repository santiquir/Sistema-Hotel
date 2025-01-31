#ifndef CALENDARIOHABITACIONES_H
#define CALENDARIOHABITACIONES_H
#include "wxfb_project.h"
#include "GestionCalendario.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"

class CalendarioHabitaciones : public Calendario {
	
private:
	GestionCalendario *calendario;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionPersonas *m_agenda;
	GestionTransacciones *m_transacciones;
protected:
	void ClickBotonOcupar( wxCommandEvent& event )  override;
	void ClickBotonBuscarReservas( wxCommandEvent& event )  override;
	
public:
	CalendarioHabitaciones(wxWindow *parent, GestionCalendario *calendario,GestionHabitaciones *m_agendaHabitaciones, 
		GestionPersonas *m_agenda, GestionTransacciones *m_transacciones);
	~CalendarioHabitaciones();
	void refrescarCalendario();
	void refrescarSelectorHabitacion();
	void refrescarSelectorPersona();
};

#endif

