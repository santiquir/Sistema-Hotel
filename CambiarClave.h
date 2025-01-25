#ifndef CAMBIARCLAVE_H
#define CAMBIARCLAVE_H
#include "wxfb_project.h"
#include "GestionTransacciones.h"

class CambiarClave : public CamClave {
	
private:
	
protected:
	void ClickBotonAceparNuevaClave( wxCommandEvent& event )  override;
	void ClickBotonCancelarClave( wxCommandEvent& event )  override;
	GestionTransacciones *m_transacciones;
public:
	CambiarClave(wxWindow *parent, GestionTransacciones *m_transacciones);
	~CambiarClave();
};

#endif

