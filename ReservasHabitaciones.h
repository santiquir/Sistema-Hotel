#ifndef RESERVASHABITACIONES_H
#define RESERVASHABITACIONES_H
#include "wxfb_project.h"
#include "GestionTransacciones.h"
#include "GestionPersona.h"
#include "GestionCalendario.h"
#include "GestionHabitaciones.h"
#include "Habitacion.h"

class ReservasHabitaciones : public ReservasHab {
	
private:
	
protected:
	void ClickBotonAgregarPersona( wxCommandEvent& event )  override;
	void ClickBotonAplicarFiltro( wxCommandEvent& event )  override;
	void ClickBotonDesplegarPanel( wxCommandEvent& event )  override;
	void ClickBotonReservar( wxCommandEvent& event )  override;
	void ClickBotonQuitarReserva( wxCommandEvent& event )  override;
	void ClickBotonCalendario( wxCommandEvent& event )  override;
	GestionTransacciones *m_transacciones;
	GestionPersonas *m_agenda;
	GestionCalendario *calendario;
	GestionHabitaciones *m_agendaHabitaciones;
	void refrescarSelectorHuespedes(); 
	void refrescarSelectorHabitaciones(); 
	void refrescarLista();
	vector<Habitacion> filtroHabitacions;
	vector<string> huespedesTemporales;
	long habitacionSeleccionada = -1;
	string FormatearNumero(long numero);
	
public:
	ReservasHabitaciones(wxWindow *parent,GestionHabitaciones *m_agendaHabitaciones,
						 GestionTransacciones *m_transacciones, GestionPersonas *m_agenda, GestionCalendario *calendario);
	~ReservasHabitaciones();
};

#endif
