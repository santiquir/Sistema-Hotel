#ifndef LISTAHUESPEDES_H
#define LISTAHUESPEDES_H
#include "wxfb_project.h"
#include "GestionPersona.h"
#include "GestionCalendario.h"

class ListaHuespedes : public listHuespedes {
	
private:
	
protected:
	void ClickBotonModificarHuesped( wxCommandEvent& event )  override;
	GestionPersonas* m_agenda;
	GestionCalendario *calendario;
	void ClickBotonBuscarHuesped( wxCommandEvent& event )  override;
	void ClickBotonEliminarHuesped( wxCommandEvent& event )  override;
	void ClickBotonAgregarHuesped( wxCommandEvent& event )  override;
	vector<int> indices;
	
public:
	ListaHuespedes(wxWindow *parent,GestionPersonas* m_agenda, GestionCalendario *calendario);
	~ListaHuespedes();
	void refrescarGrilla();
};

#endif

