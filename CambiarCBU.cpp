#include "CambiarCBU.h"
#include <wx/msgdlg.h>

CambiarCBU::CambiarCBU(wxWindow *parent, GestionTransacciones *m_transacciones) :
		CBU(parent), m_transacciones(m_transacciones) {
	
}

void CambiarCBU::ClickBotonAceptarNuevoCBU( wxCommandEvent& event )  {
	long s;
	if (!TextoNuevoCBU->GetValue().ToLong(&s)) {
		wxMessageBox("Por favor, ingrese un número válido para el CBU.", "Error", wxICON_ERROR);
		return;
	}
	
	m_transacciones->cambiarCBU(s);
	if(m_transacciones->Guardar()){
		wxMessageBox("CBU actualizado correctamente.", "Éxito", wxICON_INFORMATION);
		EndModal(1);
	}else{
		wxMessageBox("Error al guardar","Error", wxICON_ERROR);
		return;
	}
}

void CambiarCBU::ClickBotonCancelarNuevoCBU( wxCommandEvent& event )  {
	EndModal(0);
}

CambiarCBU::~CambiarCBU() {
	
}

