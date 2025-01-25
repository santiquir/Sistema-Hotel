#ifndef AGREGARTRANSACCION_H
#define AGREGARTRANSACCION_H
#include "wxfb_project.h"
#include "GestionTransacciones.h"

class AgregarTransaccion : public AgTransaccion {
	
private:
	
protected:
	void ClickBotonCancelar( wxCommandEvent& event )  override;
	void ClickBotonAgregar( wxCommandEvent& event )  override;
	GestionTransacciones* m_transacciones;
public:
	AgregarTransaccion(wxWindow *parent, GestionTransacciones *m_transacciones);
	~AgregarTransaccion();
};

#endif
