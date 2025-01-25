#include "AgregarHuesped.h"
#include "Persona.h"
#include "GestionPersona.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

AgregarHuesped::AgregarHuesped(wxWindow *parent, GestionPersonas *m_agenda) : 
	AgHuesped(parent), m_agenda(m_agenda) {
	
}

AgregarHuesped::~AgregarHuesped() {
	
}

void AgregarHuesped::ClickBotonAgregarHuesped( wxCommandEvent& event )  {
	string nombre = wx_to_std(TextoNombre->GetValue());
	string apellido = wx_to_std(TextoApellido->GetValue());
	string telefono = wx_to_std(TextoTelefono->GetValue());
	string email = wx_to_std(TextoEmail->GetValue());
	long dni,d,m,a;
	TextoDNI->GetValue().ToLong(&dni);
	TextoDia->GetValue().ToLong(&d);
	TextoMes->GetValue().ToLong(&m);
	TextoAno->GetValue().ToLong(&a);
	string hab = "-";
	Persona p(nombre,apellido,telefono,hab,email,dni,d,m,a);
	
	string errores = p.validarDatos();
	if(errores.empty()){
	m_agenda->agregarPersona(p);
	m_agenda->Guardar();
	EndModal(1);
	}else{
		wxMessageBox(errores,"Error",wxOK|wxICON_ERROR);
	}
}

void AgregarHuesped::ClickBotonCancelarHuesped( wxCommandEvent& event )  {
	EndModal(0);

}
