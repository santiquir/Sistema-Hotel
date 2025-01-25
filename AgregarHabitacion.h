#ifndef AGREGARHABITACION_H
#define AGREGARHABITACION_H
#include "wxfb_project.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"

class AgregarHabitacion : public AgHabitacion {
	
private:
	
protected:
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	void ClickBotonAceptarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonCancelarHabitacion( wxCommandEvent& event )  override;
	
public:
	AgregarHabitacion(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones, GestionTransacciones *m_transacciones);
	~AgregarHabitacion();
};

#endif

