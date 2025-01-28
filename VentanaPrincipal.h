#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H
#include "wxfb_project.h"
#include "GestionPersona.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"
#include "GestionCalendario.h"

class VentanaPrincipal : public vPrincipal {
	
private:
	
protected:
	void ClickBotonTransacciones( wxCommandEvent& event )  override;
	void ClickBotonHuesped( wxCommandEvent& event )  override;
	void ClickBotonHabitacion( wxCommandEvent& event )  override;
	void CargarInformacion();
	GestionPersonas *m_agenda;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	GestionCalendario *calendario;
	
public:
	VentanaPrincipal(GestionPersonas *m_agenda, GestionHabitaciones *m_agendaHabitaciones,
		GestionTransacciones *m_transacciones, GestionCalendario *calendario);
	~VentanaPrincipal();
};

#endif

