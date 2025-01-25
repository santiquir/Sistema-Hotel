#ifndef CAMBIARCBU_H
#define CAMBIARCBU_H
#include "wxfb_project.h"
#include "GestionTransacciones.h"

class CambiarCBU : public CBU {
	
private:
	
protected:
	void ClickBotonAceptarNuevoCBU( wxCommandEvent& event )  override;
	void ClickBotonCancelarNuevoCBU( wxCommandEvent& event )  override;
	GestionTransacciones *m_transacciones;
	
public:
	CambiarCBU(wxWindow *parent, GestionTransacciones *m_transacciones);
	~CambiarCBU();
};

#endif

