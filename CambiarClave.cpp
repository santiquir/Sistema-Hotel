#include "CambiarClave.h"
#include <wx/msgdlg.h>
#include "string_conv.h"

CambiarClave::CambiarClave(wxWindow *parent, GestionTransacciones *m_transacciones) :
		CamClave(parent),m_transacciones(m_transacciones) {
	
}

void CambiarClave::ClickBotonAceparNuevaClave( wxCommandEvent& event )  {
	string actual = wx_to_std(TextoClaveActual->GetValue());
	string nueva = wx_to_std(TextoNuevaClave->GetValue());
	string repetida = wx_to_std(TextoRepetirClave->GetValue());
	int cont = 0;
	if(actual == m_transacciones->verContrasena()){
		if(nueva == repetida){
			m_transacciones->cambiarContrasena(nueva);
			m_transacciones->Guardar();
			EndModal(1);
		}
		else
			wxMessageBox("Las contraseñas no coinciden","Error",wxICON_ERROR);
	}else
		wxMessageBox("La contraseña actual no es correcta, intentelo denuevo","Error",wxICON_ERROR);
	
	
}

void CambiarClave::ClickBotonCancelarClave( wxCommandEvent& event )  {
	EndModal(0);
}

CambiarClave::~CambiarClave() {
	
}

