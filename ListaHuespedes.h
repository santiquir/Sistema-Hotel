#ifndef LISTAHUESPEDES_H
#define LISTAHUESPEDES_H
#include "wxfb_project.h"
#include "GestionPersona.h"

class ListaHuespedes : public listHuespedes {
	
private:
	
protected:
	void ClickBotonModificarHuesped( wxCommandEvent& event )  override;
	GestionPersonas* m_agenda;
	void ClickBotonBuscarHuesped( wxCommandEvent& event )  override;
	void ClickBotonEliminarHuesped( wxCommandEvent& event )  override;
	void ClickBotonAgregarHuesped( wxCommandEvent& event )  override;
	//void CargarDatosEnGrilla();
	
public:
	//ListaHuespedes(wxWindow *parent=NULL);
	ListaHuespedes(wxWindow *parent,GestionPersonas* m_agenda);
	~ListaHuespedes();
	void refrescarGrilla();
};

#endif

