#ifndef AGREGARHUESPED_H
#define AGREGARHUESPED_H
#include "wxfb_project.h"
#include "GestionPersona.h"
#include "AgregarHuesped.h"

class AgregarHuesped : public AgHuesped {
	
private:
	
protected:
	GestionPersonas *m_agenda;
	void ClickBotonAgregarHuesped( wxCommandEvent& event )  override;
	void ClickBotonCancelarHuesped( wxCommandEvent& event )  override;
	
public:
	AgregarHuesped(wxWindow *parent,GestionPersonas *m_agenda);
	~AgregarHuesped();
};

#endif

