#include "Transacciones.h"
#include "GestionHabitaciones.h"
#include "AgregarTransaccion.h"
#include "CambiarAlias.h"
#include "CambiarCBU.h"
#include "ActividadReciente.h"
#include <wx/filedlg.h>
#include <wx/msgdlg.h>
#include "string_conv.h"
#include <sstream>
using namespace std;

Transacciones::Transacciones(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones, GestionTransacciones *m_transacciones) : 
		mTransacciones(parent), m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones){
	

	refrescarGrilla();
}

Transacciones::~Transacciones() {
	
}


void Transacciones::actualizarDatos(){
	string al = m_transacciones->verAlias();
	long c = m_transacciones->verCBU();
	string str_c = to_string(c);
	LabelAlias->SetLabel(wxString(al));
	LabelCBU->SetLabel(wxString(str_c));
	
long plata = 0;
	for(int i = 0; i < m_transacciones->verCantidadHistorial();i++){
		ActividadReciente &h = m_transacciones->verHistorial(i);
		if(h.verGP()) plata+= h.verMonto();
		else plata -= h.verMonto();
		string plata_str = FormatearNumero(plata);
		DineroAcumulado->SetLabel(wxString(plata_str));
		m_transacciones->Guardar();
		
	}
}

void Transacciones::refrescarGrilla(){
	if (GrillaActividad->GetNumberRows() > 0) {
		GrillaActividad->DeleteRows(0, GrillaActividad->GetNumberRows());
	}
	
	for(int i = 0; i < m_transacciones->verCantidadHistorial();i++){
		ActividadReciente &h = m_transacciones->verHistorial(i);
		string gp;
		if(h.verGP() == true) gp = "+";
		else gp = "-";
		GrillaActividad->AppendRows();
		GrillaActividad->SetCellValue(i,0,gp+FormatearNumero(h.verMonto()));
		GrillaActividad->SetCellValue(i,1,h.verMotivo());

	}
	actualizarDatos();
}

void Transacciones::actualizarDatosHabitaciones(){
	for(int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &hab = m_agendaHabitaciones->verHabitacion(i);
		
	}
}

void Transacciones::ClickBotonAgregarTransaccion( wxCommandEvent& event )  {
	AgregarTransaccion win(this, m_transacciones);
	if (win.ShowModal()==1){
		refrescarGrilla();
	}
}

void Transacciones::ClickBotonCambiarAlias( wxCommandEvent& event ){
	
	CambiarAlias win(this,m_transacciones);
	if(win.ShowModal()==1)
		actualizarDatos();
}

void Transacciones::ClickBotonCambiarCBU( wxCommandEvent& event )  {
	CambiarCBU win(this,m_transacciones);
	if(win.ShowModal()==1)
		actualizarDatos();
}


void Transacciones::ClickDescargarHistorial( wxCommandEvent& event )  {
	
	wxFileDialog saveFileDialog(this,"Guardar archivo TXT", wxEmptyString, "historial.txt","Archivos de texto (*.txt)|*.txt",wxFD_SAVE | wxFD_OVERWRITE_PROMPT);
	
	
	if (saveFileDialog.ShowModal() == wxID_CANCEL){
		wxMessageBox("Operacion cancelada", "Informacion", wxICON_INFORMATION);
		return;
	}
	
	wxString filepath = saveFileDialog.GetPath();
	ofstream file(wx_to_std(filepath));
	if(!file){
		wxMessageBox("Error al crear el archivo", "Error", wxICON_ERROR);
		return;
	}
	
	for(int i = 0; i<m_transacciones->verCantidadHistorial();i++){
		ActividadReciente &aux = m_transacciones->verHistorial(i);
		ostringstream oss;
		oss << "Monto: " << aux.verMonto() << " Motivo: " << aux.verMotivo() << std::endl;
		file << oss.str();
	}
	file.close();
	wxMessageBox("Archivo creado exitosamente en \n" + filepath, "Exito: ", wxICON_INFORMATION);
}
std::string Transacciones::FormatearNumero(long numero) {
	std::string numeroStr = std::to_string(numero); 
	int n = numeroStr.length();
	
	
	for (int i = n - 3; i > 0; i -= 3) {
		numeroStr.insert(i, ",");
	}
	return numeroStr;
}

