#include "AgregarHabitacion.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

AgregarHabitacion::AgregarHabitacion(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones, GestionTransacciones *m_transacciones) :
		AgHabitacion(parent),m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones) {
	
}

AgregarHabitacion::~AgregarHabitacion() {
	
}

void AgregarHabitacion::ClickBotonAceptarHabitacion( wxCommandEvent& event )  {
	
	string tipo = wx_to_std(TextoTipoHab->GetValue());
	long precio, numero;
	TextoPrecioHab->GetValue().ToLong(&precio);
	TextoNumeroHab->GetValue().ToLong(&numero);
	
	
	Habitacion h(tipo,precio,false,numero);
	string errores = h.validarHabitacion();
	if(errores.empty()){
		m_agendaHabitaciones->agregarHabitacion(h);
		m_agendaHabitaciones->guardar();
		
		EndModal(1);
	}else{
		wxMessageBox(errores,"Error",wxOK|wxICON_ERROR);
	}
}

void AgregarHabitacion::ClickBotonCancelarHabitacion( wxCommandEvent& event )  {
	EndModal(0);
}

