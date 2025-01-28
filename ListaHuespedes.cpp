#include "ListaHuespedes.h"
#include "AgregarHuesped.h"
#include "GestionPersona.h"
#include <wx/msgdlg.h>
#include "ModificarHuespedes.h"
#include "string_conv.h"

ListaHuespedes::ListaHuespedes(wxWindow *parent,GestionPersonas* m_agenda) : listHuespedes(parent), m_agenda(m_agenda)
{
	refrescarGrilla();

}

void ListaHuespedes::refrescarGrilla(){
	if (GrillaHuespedes->GetNumberRows() > 0) {
		GrillaHuespedes->DeleteRows(0, GrillaHuespedes->GetNumberRows());
	}
	indices.clear();
	
	for(int i = 0; i < m_agenda->CantidadDatos();i++){
		Persona &p = m_agenda->verPersona(i);
		GrillaHuespedes->AppendRows();
		GrillaHuespedes->SetCellValue(i,0,p.verApellido());
		GrillaHuespedes->SetCellValue(i,1,p.verNombre());
		GrillaHuespedes->SetCellValue(i,2,p.verMail());
		GrillaHuespedes->SetCellValue(i,3,p.verTelefono());
		GrillaHuespedes->SetCellValue(i,4,to_string(p.verDNI()));
		GrillaHuespedes->SetCellValue(i,5,wxString::Format("%d/%d/%d", 
														   p.verDiaNacimiento(), p.verMesNacimiento(), p.verAnioNacimiento()));
		GrillaHuespedes->SetCellValue(i,6,p.verHab());
		indices.push_back(i);
	}
}


void ListaHuespedes::ClickBotonAgregarHuesped( wxCommandEvent& event )  {
	AgregarHuesped win(this,m_agenda);
	if(win.ShowModal()==1)
		refrescarGrilla();
}

ListaHuespedes::~ListaHuespedes() {
	
}

void ListaHuespedes::ClickBotonBuscarHuesped( wxCommandEvent& event )  {
	string s;
	s = wx_to_std(BuscadorHuespedes->GetValue());
	if(s.empty()) {refrescarGrilla();return;}
	if (GrillaHuespedes->GetNumberRows() > 0) {
		GrillaHuespedes->DeleteRows(0, GrillaHuespedes->GetNumberRows());
	}
	indices.clear();
	
	int cont = 0;
	for(int i = 0; i < m_agenda->CantidadDatos();i++){
		Persona &p = m_agenda->verPersona(i);
		
		
		
		if(p.verNombre() == s or p.verApellido() == s or p.verTelefono() == s or p.verMail() == s or to_string(p.verDNI()) == s or to_string(p.verDiaNacimiento()) == s or to_string(p.verMesNacimiento()) == s or to_string(p.verAnioNacimiento()) == s){
			GrillaHuespedes->AppendRows();
			GrillaHuespedes->SetCellValue(cont,0,p.verApellido());
			GrillaHuespedes->SetCellValue(cont,1,p.verNombre());
			GrillaHuespedes->SetCellValue(cont,2,p.verMail());
			GrillaHuespedes->SetCellValue(cont,3,p.verTelefono());
			GrillaHuespedes->SetCellValue(cont,4,to_string(p.verDNI()));
			GrillaHuespedes->SetCellValue(cont,5,wxString::Format("%d/%d/%d", p.verDiaNacimiento(), p.verMesNacimiento(), p.verAnioNacimiento()));
			GrillaHuespedes->SetCellValue(cont,6,p.verHab());
			cont++;
			indices.push_back(i);
		}
	}
}
void ListaHuespedes::ClickBotonEliminarHuesped( wxCommandEvent& event )  {
	int f = GrillaHuespedes->GetGridCursorRow();
	int x = wxMessageBox("Estas seguro?", "Advertecia" ,wxYES_NO|wxICON_QUESTION);
	if(x==wxYES){
		int ind = indices[f];
		m_agenda->eliminarPersona(ind);	
		indices.erase(indices.begin()+f);
		m_agenda->Guardar();
		GrillaHuespedes->DeleteRows(f);
		refrescarGrilla();
	}
}

void ListaHuespedes::ClickBotonModificarHuesped(wxCommandEvent& event) {
	int f = GrillaHuespedes->GetGridCursorRow(); 
	
	//MENSAJE DE ERROR SI NO SELECCIONA NADA
	
	if (f == wxNOT_FOUND) { 
	wxMessageBox("Por favor, selecciona un huésped para modificar.", "Error", wxICON_ERROR);
	return;
	}
	
	int ind = indices[f];
	Persona *aModificar = &m_agenda->verPersona(ind);
	
	
	ModificarHuespedes win(this, aModificar, m_agenda);

	if (win.ShowModal() == 1) { 
	m_agenda->Guardar();
	refrescarGrilla();
	}
}	
