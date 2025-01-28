#ifndef LISTAHABITACIONES_H
#define LISTAHABITACIONES_H
#include "wxfb_project.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"
#include <vector>
#include "GestionPersona.h"
using namespace std;

class ListaHabitaciones : public listHabitaciones {
	
private:
	
protected:
	void ClickBotonModificarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonQuitarReserva( wxCommandEvent& event )  override;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	GestionPersonas *m_agenda;
	vector<int> indices;
	void ClickBotonBuscarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonEliminarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonReservar( wxCommandEvent& event )  override;
	void ClickBotonAgregarHabitacion( wxCommandEvent& event )  override;
	string FormatearNumero(long numero);
	
	
public:
	ListaHabitaciones(wxWindow *parent,GestionHabitaciones *m_agendaHabitaciones,
					  GestionTransacciones *m_transacciones, GestionPersonas *m_agenda);
	~ListaHabitaciones();
	void refrescarGrilla();
	void refrescarSelector();
};

#endif
