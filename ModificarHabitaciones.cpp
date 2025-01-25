#include "ModificarHabitaciones.h"
#include <wx/string.h>
#include "string_conv.h"
using namespace std;

ModificarHabitaciones::ModificarHabitaciones(wxWindow *parent, Habitacion *aModificar, GestionHabitaciones *m_agendaHabitaciones) :
		ModificarHabitacion(parent),aModificar(aModificar), m_agendaHabitaciones(m_agendaHabitaciones) {
	
	modHabitacion();
	
}

ModificarHabitaciones::~ModificarHabitaciones() {
	
}

void ModificarHabitaciones::modHabitacion(){
	int n,p;
	n = aModificar->verNumero();
	string str_n = to_string(n);
	p = aModificar->verPrecio(); 
	string str_p = to_string(p);
	TextoNumeroActual -> SetLabel(wxString(str_n));
	TextoPrecioActual -> SetLabel(wxString(str_p));
	TextoTipoActual ->SetLabel(wxString(aModificar->verTipo()));
}


void ModificarHabitaciones::ClickBotonAceptar( wxCommandEvent& event )  {
	long nuevoNumero, nuevoPrecio; string nuevoTipo;
	
	if (!textoNuevoNumero->GetValue().ToLong(&nuevoNumero) || nuevoNumero <= 0) {
		nuevoNumero = aModificar->verNumero();
	}
	
	if (!textoNuevoPrecio->GetValue().ToLong(&nuevoPrecio) || nuevoPrecio <= 0) {
		nuevoPrecio = aModificar->verPrecio();
	}
	
	nuevoTipo = wx_to_std(textoNuevoTipo->GetValue());
	if (nuevoTipo.empty()) {
		nuevoTipo = aModificar->verTipo();
	}
	
	aModificar->actualizarNumero(nuevoNumero);
	aModificar->actualizarPrecio(nuevoPrecio);
	aModificar->actualizarTipo(nuevoTipo);
	if (aModificar->verEstado() == true) {
		aModificar->actualizarEstado();
	}
	
	m_agendaHabitaciones->ordenarHabitaciones();
	m_agendaHabitaciones->guardar();
	EndModal(1);
	
}

void ModificarHabitaciones::ClickBotonCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

