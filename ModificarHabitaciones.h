#ifndef MODIFICARHABITACIONES_H
#define MODIFICARHABITACIONES_H
#include "wxfb_project.h"
#include "Habitacion.h"
#include "GestionHabitaciones.h"

class ModificarHabitaciones : public ModificarHabitacion {
	
private:
	
protected:
	void ClickBotonAceptar( wxCommandEvent& event )  override;
	void ClickBotonCancelar( wxCommandEvent& event )  override;
	Habitacion *aModificar;
	GestionHabitaciones *m_agendaHabitaciones;
public:
	ModificarHabitaciones(wxWindow *parent, Habitacion *aModificar, GestionHabitaciones *m_agendaHabitaciones);
	~ModificarHabitaciones();
	void modHabitacion();
};

#endif

