#include "AgregarTransaccion.h"
#include "GestionTransacciones.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "ActividadReciente.h"
#include <wx/string.h>

AgregarTransaccion::AgregarTransaccion(wxWindow *parent, GestionTransacciones *m_transacciones) : 
		AgTransaccion(parent), m_transacciones(m_transacciones){
	
}

AgregarTransaccion::~AgregarTransaccion() {
	
}

void AgregarTransaccion::ClickBotonAgregar(wxCommandEvent& event) {
	long monto; string motivo; bool gp;;
	bool valid = true; // Bandera para validar los datos de entrada.
	wxString errorMsg;
	
	// Validar monto
	if (!TextoMonto->GetValue().ToLong(&monto) || monto <= 0) {
		errorMsg += "El monto ingresado no es válido.\n";
		valid = false;
	}
	
	// Validar motivo
	motivo = wx_to_std(TextoMotivo->GetValue());
	if (motivo.empty()) {
		errorMsg += "El motivo está vacío.\n";
		valid = false;
	}
	
	// Mostrar error si no es válido
	if (!valid) {
		wxMessageBox(errorMsg, "Error", wxICON_ERROR);
		return;
	}
	string s = wx_to_std(Selector->GetStringSelection());
	if(s == "Ingreso") gp = true;
	else gp = false;
	m_transacciones->agregarHistorial(motivo,monto,gp);
	m_transacciones->GuardarActividad();
	
	EndModal(1);
}

void AgregarTransaccion::ClickBotonCancelar( wxCommandEvent& event )  {
	EndModal(0);
}
