#ifndef MODIFICARHUESPEDES_H
#define MODIFICARHUESPEDES_H
#include "wxfb_project.h"
#include "Persona.h"
#include "GestionPersona.h"

class ModificarHuespedes : public ModificarHuesped {
	
private:
	
protected:
	void ClickBotonModificar( wxCommandEvent& event )  override;
	void ClickBotonCancelar( wxCommandEvent& event )  override;
	Persona *aModificar;
	GestionPersonas *m_agenda;
public:
	ModificarHuespedes(wxWindow *parent, Persona *aModificar, GestionPersonas *m_agenda);
	~ModificarHuespedes();
	void modPersona();
};

#endif
