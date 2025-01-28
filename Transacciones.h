#ifndef TRANSACCIONES_H
#define TRANSACCIONES_H
#include "wxfb_project.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"

class Transacciones : public mTransacciones {
	
private:
	
protected:
	void ClickDescargarHistorial( wxCommandEvent& event )  override;
	void ClickBotonCambiarAlias( wxCommandEvent& event )  override;
	void ClickBotonCambiarCBU( wxCommandEvent& event )  override;
	void ClickBotonAgregarTransaccion( wxCommandEvent& event )  override;
	string FormatearNumero(long numero);
	double dinero;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	
public:
	Transacciones(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones, GestionTransacciones *m_transacciones);
	~Transacciones();
	void actualizarDinero();
	void actualizarDatos();
	void refrescarGrilla();
	void actualizarDatosHabitaciones();
	
};

#endif

