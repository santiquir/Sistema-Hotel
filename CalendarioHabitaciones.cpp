#include "CalendarioHabitaciones.h"
#include <wx/msgdlg.h>
#include <wx/calctrl.h>
#include <wx/log.h>
#include "string_conv.h"

#include <sstream>
using namespace std;

CalendarioHabitaciones::CalendarioHabitaciones(wxWindow *parent, GestionCalendario *calendario,
		GestionHabitaciones *m_agendaHabitaciones, GestionPersonas *m_agenda, GestionTransacciones *m_transacciones) :
			Calendario(parent), calendario(calendario),m_agendaHabitaciones(m_agendaHabitaciones), m_agenda(m_agenda),
				m_transacciones(m_transacciones){
		
	refrescarSelectorHabitacion();
	refrescarSelectorPersona();
	
}

void CalendarioHabitaciones::refrescarSelectorHabitacion(){
	TextoNumeroHabReserva->Clear();
	
	for (int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
		TextoNumeroHabReserva->Append(wxString::Format("%ld", h.verNumero()));
	}
}

void CalendarioHabitaciones::refrescarSelectorPersona(){
	SelectorPersona->Clear();
	long n;
	if (!TextoNumeroHabReserva->GetStringSelection().ToLong(&n)) {
		return;
	}
	
	for(int i = 0; i < m_agenda->CantidadDatos();i++){
		Persona &p = m_agenda->verPersona(i);
		if(p.verHab() == to_string(n) && p.verRol() == "Titular"){
			SelectorPersona->Append(p.verApellido() + ", " + p.verNombre());
		}
	}
}

void CalendarioHabitaciones::refrescarCalendario(){
	long numeroHabitacion;
	
	if (!TextoNumeroHabReserva->GetStringSelection().ToLong(&numeroHabitacion)) {
		wxMessageBox("N�mero de habitaci�n inv�lido.","Error",wxICON_ERROR);
		return;
	}
	
	
	const auto& reservas = calendario->ObtenerReservas(numeroHabitacion);
	int cant = calendario->cantidadReservasHabitacion(numeroHabitacion);
	
	if(m_calendario->GetNumberRows() > 0)
		m_calendario->DeleteRows(0, m_calendario->GetNumberRows());
	
	if (cant == 0 || reservas.empty()) {
		cout << "No hay reservas para la habitaci�n " << numeroHabitacion << endl;
		return;
	}
	
	int cont = 0;
	for (const auto& reserva : reservas){
		string entrada, salida, nombre; bool est = false;
		
		entrada = to_string(reserva.fechaEntrada.GetDay()) + "/"  
			+ to_string((reserva.fechaEntrada.GetMonth() + 1)) + "/"  
			+ to_string(reserva.fechaEntrada.GetYear());
		
		salida = to_string(reserva.fechaSalida.GetDay()) + "/"  
			+ to_string((reserva.fechaSalida.GetMonth() + 1)) + "/"  
			+ to_string(reserva.fechaSalida.GetYear());
		
		for(int i = 0; i < m_agenda->CantidadDatos();i++){
			Persona &p = m_agenda->verPersona(i);
			pair<wxDateTime,wxDateTime> x = p.verFechaReserva();
			if(reserva.fechaEntrada == x.first && reserva.fechaSalida == x.second && p.verHab() == to_string(numeroHabitacion) && p.verRol() == "Titular"){
				nombre = p.verApellido() + ", " + p.verNombre();
				est = p.verEstadoReservo_ocupo();
				break;
			}
		}
		
		if(calendario->cantidadReservasHabitacion(numeroHabitacion) > m_calendario->GetNumberRows()){
			m_calendario->AppendRows();
			
			m_calendario->SetCellValue(cont,0,entrada);
			m_calendario->SetCellValue(cont,1,salida);
			m_calendario->SetCellValue(cont,2,nombre);
	
			//si esta ocupando la habitacion, el fila se pinta de verde
			if(est){
				m_calendario->SetCellBackgroundColour(cont,0,wxColour(150,230,150));
				m_calendario->SetCellBackgroundColour(cont,1,wxColour(150,230,150));
				m_calendario->SetCellBackgroundColour(cont,2,wxColour(150,230,150));
			}
			//si esta reservando pero no ocupando la habitacion, el fila se pinta de amarillo
			else{
				m_calendario->SetCellBackgroundColour(cont,0,wxColour(255,240,150));
				m_calendario->SetCellBackgroundColour(cont,1,wxColour(255,240,150));
				m_calendario->SetCellBackgroundColour(cont,2,wxColour(255,240,150));
			}
			cont++;
		}
	}	
}

void CalendarioHabitaciones::ClickBotonBuscarReservas( wxCommandEvent& event )  {
	long numeroHabitacion;
	if (!TextoNumeroHabReserva->GetStringSelection().ToLong(&numeroHabitacion)) {
		cout << "Error: N�mero de habitaci�n inv�lido." << endl;
		return;
	}
	
	const auto& reservas = calendario->ObtenerReservas(numeroHabitacion);
	
	if(reservas.empty() && m_calendario->GetNumberRows() == 0)
		wxMessageBox("La habitaci�n no presenta ninguna reserva","Error",wxICON_INFORMATION);
	
	if(reservas.empty() && m_calendario->GetNumberRows()>0){
		wxMessageBox("La habitaci�n no presenta ninguna reserva","Error",wxICON_INFORMATION);
		m_calendario->DeleteRows(0,m_calendario->GetNumberRows());
	}
		
	else if(m_calendario->GetNumberRows() > 0){
		m_calendario->DeleteRows(0,m_calendario->GetNumberRows());
		refrescarCalendario();
	}
	refrescarCalendario();
	refrescarSelectorPersona();
}



void CalendarioHabitaciones::ClickBotonOcupar( wxCommandEvent& event ){
	if(SelectorPersona->GetSelection() == wxNOT_FOUND ){
		wxMessageBox("Seleccione a una persona para continuar","Error",wxICON_ERROR);
		return;
	}
	
	string nombreCompleto = wx_to_std(SelectorPersona->GetStringSelection());
	string apellido, nombre;
	size_t pos = nombreCompleto.find(',');
	if (pos != string::npos) {
		apellido = nombreCompleto.substr(0, pos); 
		nombre = nombreCompleto.substr(pos + 2);
	}
	
	long numeroHabitacion;
	if (!TextoNumeroHabReserva->GetStringSelection().ToLong(&numeroHabitacion)) {
		cout << "Error: N�mero de habitaci�n inv�lido." << endl;
		return;
	}
	
	
	
	for(int i = 0; i < m_agenda->CantidadDatos();i++){
		Persona &p = m_agenda->verPersona(i);
		pair<wxDateTime,wxDateTime> x = p.verFechaReserva();
		wxDateTime entrada = x.first;
		wxDateTime salida = x.second;
		entrada.ResetTime();
		salida.ResetTime();
		
		if(p.verNombre() == nombre && p.verApellido() == apellido){
			if(p.verEstadoReservo_ocupo()){
				wxMessageBox("Este huesped ya esta ocupando una habitaci�n","Error",wxICON_ERROR);
				return;
			}else{
				p.modificarReservo_ocupo();
				//se buscan los acompa�antes que estan con el titular
				for(int j = 0; j < m_agenda->CantidadDatos();j++){
					Persona &h = m_agenda->verPersona(j);
					pair<wxDateTime,wxDateTime> f = h.verFechaReserva();
					wxDateTime entradaAcompanante = f.first;
					wxDateTime salidaAcompanante = f.second;
					entradaAcompanante.ResetTime();
					salidaAcompanante.ResetTime();
					if(entradaAcompanante == entrada && salidaAcompanante == salida && h.verRol() == "Acompanante"){
						h.modificarReservo_ocupo();
					}
				}
				break;
			}
		}
	}
	
	long numero;
	if (!TextoNumeroHabReserva->GetStringSelection().ToLong(&numero)) {
		return;
	}
	
	long monto = 0, monto_total = 0;
	for (int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones(); i++) {
		if (m_agendaHabitaciones->verHabitacion(i).verNumero() == numero) {
			Habitacion &hab = m_agendaHabitaciones->verHabitacion(i);
			monto = hab.verPrecio();
			monto_total = monto * 0.7 + 1;
			hab.actualizarEstado();
			break;
		}
	}
	
	//se guardan los datos en las tranascciones y en la agenda
	string motivo = "Pago total de la habitaci�n " + to_string(numero) ;
	wxDateTime a = wxDateTime::Now();
	m_transacciones->agregarHistorial(motivo,monto_total,true,a);
	m_transacciones->GuardarActividad();
	m_agendaHabitaciones->guardar();
	m_agenda->Guardar();
	refrescarCalendario();
	wxMessageBox("Disfrute del opedaje","Excelente",wxICON_INFORMATION);
}

CalendarioHabitaciones::~CalendarioHabitaciones() {}
