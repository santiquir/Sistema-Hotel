#include "LoginTransaccion.h"
#include <wx/msgdlg.h>
#include "Transacciones.h"
#include "string_conv.h"
#include "GestionHabitaciones.h"
#include "GestionTransacciones.h"
#include "CambiarClave.h"
using namespace std;
LoginTransaccion::LoginTransaccion(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones, GestionTransacciones *m_transacciones, GestionCalendario* calendario): 
		LoginTransacciones(parent), m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones), calendario(calendario){
	
}

LoginTransaccion::~LoginTransaccion() {
	
}


void LoginTransaccion::ClickBotonIngresarTransacciones( wxCommandEvent& event )  {
	wxString x = TextoContrasena->GetValue();
	if(m_transacciones->verContrasena() == x){
		Transacciones *win = new Transacciones(this,m_agendaHabitaciones,m_transacciones, calendario);
		win -> Show();
	}
	else{
		wxMessageBox("Clave de acceso Incorrecta","Error al Ingresar",wxOK|wxICON_ERROR);
	}
}

void LoginTransaccion::BotonAtrasaLogin( wxCommandEvent& event )  {
	Close();
}

void LoginTransaccion::BotonCambiarClave( wxCommandEvent& event )  {
	CambiarClave win(this,m_transacciones);
	if(win.ShowModal() == 1);
		
}

