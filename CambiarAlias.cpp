#include "CambiarAlias.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

CambiarAlias::CambiarAlias(wxWindow *parent,  GestionTransacciones *m_transacciones) :
		Alias(parent), m_transacciones(m_transacciones){
	
}

void CambiarAlias::ClickBotonAceptarNuevoAlias( wxCommandEvent& event )  {
	string s = wx_to_std(TextoNuevoAlias->GetValue());
	m_transacciones->cambiarAlias(s);
	if(m_transacciones->Guardar()){
		wxMessageBox("Alias actualizado correctamente.", "Éxito", wxICON_INFORMATION);
		EndModal(1);
	}else{
		wxMessageBox("Error al guardar","Error", wxICON_ERROR);
		return;
	}
}

void CambiarAlias::ClickBotonCancelarNuevoAlias( wxCommandEvent& event )  {
	EndModal(0);
}

CambiarAlias::~CambiarAlias() {
	
}

