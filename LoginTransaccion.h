#ifndef LOGINTRANSACCION_H
#define LOGINTRANSACCION_H
#include "wxfb_project.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"
#include "GestionCalendario.h"

class LoginTransaccion : public LoginTransacciones {
	
private:
	
protected:
	void BotonCambiarClave( wxCommandEvent& event )  override;
	void ClickBotonIngresarTransacciones( wxCommandEvent& event )  override;
	void BotonAtrasaLogin( wxCommandEvent& event )  override;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	GestionCalendario *calendario;
public:
	LoginTransaccion(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones,GestionTransacciones *m_transacciones, GestionCalendario* calendario);
	~LoginTransaccion();
};

#endif

