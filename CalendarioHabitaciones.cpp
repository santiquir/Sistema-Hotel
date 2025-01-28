#include "CalendarioHabitaciones.h"
#include <wx/msgdlg.h>

CalendarioHabitaciones::CalendarioHabitaciones(wxWindow *parent, GestionCalendario *calendario,
		GestionHabitaciones *m_agendaHabitaciones) : Calendario(parent), calendario(calendario),
		m_agendaHabitaciones(m_agendaHabitaciones){
		
	refrescarSelector();
}

CalendarioHabitaciones::~CalendarioHabitaciones() {
	
}


void CalendarioHabitaciones::refrescarSelector(){
	TextoNumeroHabReserva->Clear();
	
	for (int i = 0; i < m_agendaHabitaciones->verCantidadHabitaciones();i++){
		Habitacion &h = m_agendaHabitaciones->verHabitacion(i);
		TextoNumeroHabReserva->Append(wxString::Format("%ld", h.verNumero()));
	}
}

void CalendarioHabitaciones::refrescarCalendario() {
	// Limpiar las marcas anteriores en el calendario
	wxDateTime fechaActual = m_calendario->GetDate();
	int mesVisible = fechaActual.GetMonth();
	int anioVisible = fechaActual.GetYear();
	
	// Obtener el primer y último día del mes visible
	wxDateTime primerDia;
	primerDia.Set(1, static_cast<wxDateTime::Month>(mesVisible), anioVisible);
	wxDateTime ultimoDia = primerDia;
	ultimoDia.SetToLastMonthDay();
	int diasEnMes = ultimoDia.GetDay();
	
	for (int dia = 1; dia <= diasEnMes; ++dia) {
		wxCalendarDateAttr *attr = m_calendario->GetAttr(dia);
		if (attr) {
			delete attr; // Liberar atributo existente
		}
		m_calendario->SetAttr(dia, nullptr); // Limpiar atributo personalizado
	}
	
	// Validar selección de habitación
	int seleccion = TextoNumeroHabReserva->GetSelection();
	if (seleccion == wxNOT_FOUND) {
		wxMessageBox("Por favor, seleccione un número de habitación válido.", "Error", wxICON_ERROR);
		return;
	}
	
	long numeroHabitacion;
	wxString habitacionStr = TextoNumeroHabReserva->GetString(seleccion);
	if (!habitacionStr.ToLong(&numeroHabitacion)) {
		wxMessageBox("Por favor, ingrese un número de habitación válido.", "Error", wxICON_ERROR);
		return;
	}
	
	const auto &reservas = calendario->ObtenerReservas(numeroHabitacion);
	
	if (reservas.empty()) {
		wxMessageBox("No hay reservas para la habitación especificada.", "Información", wxICON_INFORMATION);
		return;
	}
	
	for (const auto &reserva : reservas) {
		if (!reserva.fechaEntrada.IsValid() || !reserva.fechaSalida.IsValid()) {
			wxMessageBox("Una reserva contiene una fecha inválida.", "Error", wxICON_ERROR);
			continue;
		}
		
		if (reserva.fechaEntrada.GetMonth() == mesVisible &&
			reserva.fechaEntrada.GetYear() == anioVisible) {
			int diaEntrada = reserva.fechaEntrada.GetDay();
			wxCalendarDateAttr *entradaAttr = new wxCalendarDateAttr(wxColour(255, 0, 0));
			wxCalendarDateAttr *prevAttr = m_calendario->GetAttr(diaEntrada);
			if (prevAttr) delete prevAttr;
			m_calendario->SetAttr(diaEntrada, entradaAttr);
		}
		
		if (reserva.fechaSalida.GetMonth() == mesVisible &&
			reserva.fechaSalida.GetYear() == anioVisible) {
			int diaSalida = reserva.fechaSalida.GetDay();
			wxCalendarDateAttr *salidaAttr = new wxCalendarDateAttr(wxColour(0, 255, 0));
			wxCalendarDateAttr *prevAttr = m_calendario->GetAttr(diaSalida);
			if (prevAttr) delete prevAttr;
			m_calendario->SetAttr(diaSalida, salidaAttr);
		}
	}
}


void CalendarioHabitaciones::ClickBotonBuscarReservas( wxCommandEvent& event )  {
	refrescarCalendario();
}

