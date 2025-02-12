#include "ListaHabitaciones.h"
#include "AgregarHabitacion.h"
#include <wx/msgdlg.h>
#include "Habitacion.h"
#include "ModificarHabitaciones.h"
#include "string_conv.h"
#include <sstream>
#include "Persona.h"
#include "CalendarioHabitaciones.h"
#include "GestionCalendario.h"

using namespace std;


ListaHabitaciones::ListaHabitaciones(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones,
		GestionTransacciones *m_transacciones) : listHabitaciones(parent),
		m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones){

	refrescarGrilla();
	
}

void ListaHabitaciones::refrescarGrilla(){
	if (GrillaHabitaciones->GetNumberRows() > 0) {
		GrillaHabitaciones->DeleteRows(0, GrillaHabitaciones->GetNumberRows());
	}
	indices.clear();
	
	for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &p = m_agendaHabitaciones->verHabitacion(i);
		GrillaHabitaciones->AppendRows();
		GrillaHabitaciones->SetCellValue(i,0,to_string(p.verNumero()));
		GrillaHabitaciones->SetCellValue(i,1,p.verTipo());
		GrillaHabitaciones->SetCellValue(i,2,"$"+FormatearNumero(p.verPrecio()));
		GrillaHabitaciones->SetCellValue(i,3,to_string(p.verCapacidad()));
		indices.push_back(i);
	}
	
}

void ListaHabitaciones::ClickBotonAgregarHabitacion( wxCommandEvent& event )  {
	AgregarHabitacion win(this,m_agendaHabitaciones,m_transacciones);
	if(win.ShowModal()==1)
		refrescarGrilla();
}

ListaHabitaciones::~ListaHabitaciones() {
	
}

void ListaHabitaciones::ClickBotonBuscarHabitacion( wxCommandEvent& event )  {
	string s;
	s = wx_to_std(BuscadorHabitaciones->GetValue());
	if(s.empty()) {refrescarGrilla();return;}
	if (GrillaHabitaciones->GetNumberRows() > 0) {
		GrillaHabitaciones->DeleteRows(0, GrillaHabitaciones->GetNumberRows());
	}
	indices.clear();
	
	int cont = 0;
	for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &p = m_agendaHabitaciones->verHabitacion(i);
		
		if(p.verTipo() == s || to_string(p.verNumero()) == s || to_string(p.verCapacidad()) == s){
			GrillaHabitaciones->AppendRows();
			GrillaHabitaciones->SetCellValue(cont,0,to_string(p.verNumero()));
			GrillaHabitaciones->SetCellValue(cont,1,p.verTipo());
			GrillaHabitaciones->SetCellValue(cont,2,"$"+FormatearNumero(p.verPrecio()));
			GrillaHabitaciones->SetCellValue(i,3,to_string(p.verCapacidad()));
			cont++;
			indices.push_back(i);
		}
	}
}

void ListaHabitaciones::ClickBotonEliminarHabitacion( wxCommandEvent& event )  {
	
	int f = GrillaHabitaciones->GetGridCursorRow();
	int x = wxMessageBox("Estas seguro?","Advertecia",wxYES_NO|wxICON_QUESTION);
	
	if(x == wxYES){
		int ind = indices[f];
		m_agendaHabitaciones->eliminarHabitacion(ind);
		indices.erase(indices.begin()+f);
		m_agendaHabitaciones->guardar();
		GrillaHabitaciones->DeleteRows(f);
		refrescarGrilla();
	}
}



void ListaHabitaciones::ClickBotonModificarHabitacion( wxCommandEvent& event )  {
	int f = GrillaHabitaciones->GetGridCursorRow();
	
	if (f == wxNOT_FOUND) { 
		wxMessageBox("Por favor, selecciona un huésped para modificar.", "Error", wxICON_ERROR);
		return;
	}
	int ind = indices[f];
	Habitacion* aModificar = &m_agendaHabitaciones->verHabitacion(ind);
	
	ModificarHabitaciones win(this,aModificar,m_agendaHabitaciones);
	if(win.ShowModal()==1) refrescarGrilla();
}

string ListaHabitaciones::FormatearNumero(long numero) {
	std::string numeroStr = std::to_string(numero); 
	int n = numeroStr.length();
	
	
	for (int i = n - 3; i > 0; i -= 3) {
		numeroStr.insert(i, ",");
	}
	return numeroStr;
}
