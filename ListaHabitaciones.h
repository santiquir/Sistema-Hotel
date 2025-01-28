#ifndef LISTAHABITACIONES_H
#define LISTAHABITACIONES_H
#include "wxfb_project.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"
#include <vector>
#include "GestionPersona.h"
#include "GestionCalendario.h"
using namespace std;

class ListaHabitaciones : public listHabitaciones {
	
private:
	
protected:
	void ClickBotonCalendario( wxCommandEvent& event )  override;
	void ClickBotonModificarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonQuitarReserva( wxCommandEvent& event )  override;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	GestionPersonas *m_agenda;
	GestionCalendario *calendario;
	vector<int> indices;
	void ClickBotonBuscarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonEliminarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonReservar( wxCommandEvent& event )  override;
	void ClickBotonAgregarHabitacion( wxCommandEvent& event )  override;
	string FormatearNumero(long numero);
	
	
public:
	ListaHabitaciones(wxWindow *parent,GestionHabitaciones *m_agendaHabitaciones,
					  GestionTransacciones *m_transacciones, GestionPersonas *m_agenda, GestionCalendario *calendario);
	~ListaHabitaciones();
	void refrescarGrilla();
	void refrescarSelector();
};

#endif
