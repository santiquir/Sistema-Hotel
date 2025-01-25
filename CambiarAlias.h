#ifndef CAMBIARALIAS_H
#define CAMBIARALIAS_H
#include "wxfb_project.h"
#include "GestionTransacciones.h"
#include "Transacciones.h"

class CambiarAlias : public Alias {
	
private:
	
protected:
	void ClickBotonAceptarNuevoAlias( wxCommandEvent& event )  override;
	void ClickBotonCancelarNuevoAlias( wxCommandEvent& event )  override;
	GestionTransacciones *m_transacciones;
	
public:
	CambiarAlias(wxWindow *parent, GestionTransacciones *m_transacciones);
	~CambiarAlias();
};

#endif

