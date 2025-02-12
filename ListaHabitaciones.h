#ifndef LISTAHABITACIONES_H
#define LISTAHABITACIONES_H
#include "wxfb_project.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"
#include <vector>
using namespace std;

class ListaHabitaciones : public listHabitaciones {
	
private:
	
protected:
	void ClickBotonModificarHabitacion( wxCommandEvent& event )  override;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	vector<int> indices;
	string FormatearNumero(long numero);
	void ClickBotonBuscarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonEliminarHabitacion( wxCommandEvent& event )  override;
	void ClickBotonAgregarHabitacion( wxCommandEvent& event )  override;
	
	
public:
	ListaHabitaciones(wxWindow *parent,GestionHabitaciones *m_agendaHabitaciones, GestionTransacciones *m_transacciones);
	~ListaHabitaciones();
	void refrescarGrilla();
	void refrescarSelector();
};

#endif
