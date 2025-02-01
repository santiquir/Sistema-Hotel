#ifndef TRANSACCIONES_H
#define TRANSACCIONES_H
#include "wxfb_project.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"
#include "GestionCalendario.h"

class Transacciones : public mTransacciones {
	
private:
	
protected:
	void CFiltroOn( wxCommandEvent& event )  override;
	void ClickFechaInput( wxDateEvent& event )  ;
	void Filtrar()  ;
	void ClickDescargarHistorial( wxCommandEvent& event )  override;
	void ClickBotonCambiarAlias( wxCommandEvent& event )  override;
	void ClickBotonCambiarCBU( wxCommandEvent& event )  override;
	void ClickBotonAgregarTransaccion( wxCommandEvent& event )  override;
	string FormatearNumero(long numero);
	double dinero;
	GestionHabitaciones *m_agendaHabitaciones;
	GestionTransacciones *m_transacciones;
	GestionCalendario* calendario;
public:
	Transacciones(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones, GestionTransacciones *m_transacciones, GestionCalendario* calendario);
	~Transacciones();
	void mostrarFiltro();
	void actualizarDinero();
	void actualizarDatos();
	void refrescarGrilla();
	void actualizarDatosHabitaciones();
	
};

#endif
