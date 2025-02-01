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
#include <wx/datetime.h>
#include "GestionCalendario.h"
using namespace std;

Transacciones::Transacciones(wxWindow *parent, GestionHabitaciones *m_agendaHabitaciones, GestionTransacciones *m_transacciones, GestionCalendario* calendario) : 
		mTransacciones(parent), m_agendaHabitaciones(m_agendaHabitaciones), m_transacciones(m_transacciones), calendario(calendario){
	

	refrescarGrilla();
	actualizarDatos();
	
}

Transacciones::~Transacciones() {
	
}

void Transacciones::mostrarFiltro(){
	if (GrillaActividad->GetNumberRows() > 0) {
		GrillaActividad->DeleteRows(0, GrillaActividad->GetNumberRows());
	}
	
	//Modificado para que muestre el vector del filtro (vector de filtro no esta terminado)
	
	for(int i = 0; i < m_transacciones->verCantidadFiltro();i++){
		ActividadReciente h = m_transacciones->verHistorial(i);
		string gp;
		if(h.verGP() == true) gp = "+";
		else gp = "-";
		GrillaActividad->AppendRows();
		GrillaActividad->SetCellValue(i,0,gp+FormatearNumero(h.verMonto()));
		GrillaActividad->SetCellValue(i,1,h.verMotivo());
		
	}
	long plata = 0;
	for(int i = 0; i < m_transacciones->verCantidadFiltro();i++){
		ActividadReciente h = m_transacciones->verHistorialFiltro(i);
		if(h.verGP()) plata+= h.verMonto();
		else plata -= h.verMonto();
		string plata_str = FormatearNumero(plata);
		DineroAcumulado->SetLabel(wxString(plata_str));
		m_transacciones->Guardar();
		cout << plata_str;
	}
	
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
		cout << plata_str;
		
	}
}

void Transacciones::refrescarGrilla(){
	if (GrillaActividad->GetNumberRows() > 0) {
		GrillaActividad->DeleteRows(0, GrillaActividad->GetNumberRows());
	}
	
	//Modificado para que muestre el vector del filtro (vector de filtro no esta terminado)
	
	for(int i = 0; i < m_transacciones->verCantidadHistorial();i++){
		ActividadReciente h = m_transacciones->verHistorial(i);
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
	if (CFiltro->IsChecked()) {
		for(int i = 0; i<m_transacciones->verCantidadFiltro();i++){
			ActividadReciente aux = m_transacciones->verHistorialFiltro(i);
			ostringstream oss;
			oss << "Monto: " << aux.verMonto() << " Motivo: " << aux.verMotivo() << std::endl;
			file << oss.str();
		}
		file.close();
		wxMessageBox("Archivo creado exitosamente en \n" + filepath, "Exito: ", wxICON_INFORMATION);
		
	} else {
		for(int i = 0; i<m_transacciones->verCantidadHistorial();i++){
			ActividadReciente &aux = m_transacciones->verHistorial(i);
			ostringstream oss;
			oss << "Monto: " << aux.verMonto() << " Motivo: " << aux.verMotivo() << std::endl;
			file << oss.str();
		}
		file.close();
		wxMessageBox("Archivo creado exitosamente en \n" + filepath, "Exito: ", wxICON_INFORMATION);
	}
}

string Transacciones::FormatearNumero(long numero) {
	std::string numeroStr = std::to_string(numero); 
	int n = numeroStr.length();
	
	
	for (int i = n - 3; i > 0; i -= 3) {
		numeroStr.insert(i, ",");
	}
	return numeroStr;
}

void Transacciones::ClickFechaInput( wxDateEvent& event )  {
	event.Skip();
}

void Transacciones::Filtrar() {
	int selection = SeleccionRapida->GetSelection();
	wxDateTime hoy = wxDateTime::Today();
	m_transacciones->resetFiltro();
	for (int i = 0; i < m_transacciones->verCantidadHistorial(); i++) {
		ActividadReciente &aux = m_transacciones->verHistorial(i);
		wxDateTime f = aux.verFecha();
		f.ResetTime(); hoy.ResetTime();
		bool cumple = false;
		switch (selection) {
		case 0: cumple = (f == hoy); break;
		case 1: cumple = (f == hoy - wxTimeSpan::Days(1)); break;
		case 2: cumple = (f == hoy - wxTimeSpan::Days(3)); break;
		case 3: cumple = (f >= hoy - wxTimeSpan::Days(7) && f <= hoy); break;
		case 4: cumple = (f >= hoy - wxTimeSpan::Days(30) && f <= hoy); break;
		case 5: cumple = (f >= hoy - wxTimeSpan::Days(210) && f <= hoy); break;
		}
		if (cumple) {
			m_transacciones->agregarPersonaFiltro(aux);
		}
	}
	if (m_transacciones->verCantidadFiltro() == 0) {
		GrillaActividad->DeleteRows(0, GrillaActividad->GetNumberRows());
	} else {
		mostrarFiltro();
	}
}


void Transacciones::CFiltroOn( wxCommandEvent& event )  {
	if (CFiltro->IsChecked()) {
		// Aplicar filtrado cuando el checkbox está activo
		cout << "Esta activo" << endl;
		Filtrar();
	} else {
		// Opcional: Aquí puedes limpiar el filtro o hacer nada
		cout << "Esta inactivo" << endl;
		refrescarGrilla();
	}
}

