#include "GestionCalendario.h"
#include <wx/msgdlg.h>
#include <algorithm> // Para std::remove_if
#include <stdexcept> // Para std::runtime_error
#include <fstream>   // Para std::ifstream y std::ofstream
#include <wx/datetime.h>

using namespace std;

GestionCalendario::GestionCalendario(string a_archivos)
	: nombreArchivos(a_archivos) {
	// Constructor
}

void GestionCalendario::AgregarReserva(const wxDateTime &fechaEntrada, const wxDateTime &fechaSalida, long numeroHabitacion) {
	auto& reservas = reservasPorHabitacion[numeroHabitacion].reservas;
	
	// Validar que no se solapen las fechas
	for (const auto& reserva : reservas) {
		if (!(fechaSalida <= reserva.fechaEntrada || fechaEntrada >= reserva.fechaSalida)) {
			wxMessageBox("El rango de fechas se superpone con otra reserva.", "Error", wxICON_ERROR);
			return;
		}
	}
	
	Reserva nuevaReserva = {fechaEntrada, fechaSalida};
	reservas.push_back(nuevaReserva);
}


void GestionCalendario::QuitarReserva(const wxDateTime &fechaEntrada, long numeroHabitacion) {
	auto& reservas = reservasPorHabitacion[numeroHabitacion].reservas;
	for(auto it = reservas.begin(); it != reservas.end();){
		if(it->fechaEntrada == fechaEntrada){
			reservas.erase(it);
			return;
		}else
		   ++it;
	}
	wxMessageBox("La fecha de entrada ingresada no existe.", "Error", wxICON_ERROR);
}

void GestionCalendario::ModificarReserva(const wxDateTime &fechaEntradaAntigua, const wxDateTime &fechaEntradaNueva, const wxDateTime &fechaSalidaNueva ,long numeroHabitacion) {
	auto& reservas = reservasPorHabitacion[numeroHabitacion].reservas;
	
	for(auto it = reservas.begin(); it != reservas.end();){
		if(it->fechaEntrada == fechaEntradaAntigua){
			it-> fechaEntrada = fechaEntradaNueva;
			it -> fechaSalida = fechaSalidaNueva;
			return;
		}
		else
		   ++it;
	}
	wxMessageBox("La fecha de entrada ingresada no coincide con ninguna.", "Error", wxICON_ERROR);
}	

bool GestionCalendario::BuscarReserva(const wxDateTime &fechaEntrada, const wxDateTime &fechaSalida, long numeroHabitacion) {
	const auto& reservas = reservasPorHabitacion[numeroHabitacion].reservas;
	for(const auto& reserva : reservas){
		if(reserva.fechaEntrada == fechaEntrada && reserva.fechaSalida == fechaSalida){
			return true;
		}
	}
	return false;
}

vector<Reserva> GestionCalendario::ObtenerReservas(long numeroHabitacion) {
	return reservasPorHabitacion[numeroHabitacion].reservas;
}

void GestionCalendario::GuardarEnArchivo() {
	ofstream archivo(nombreArchivos, ios::binary);
	if (!archivo) {
		throw runtime_error("No se pudo abrir el archivo para guardar el calendario");
	}
	
	// Guardar el número de habitaciones
	size_t numHabitaciones = reservasPorHabitacion.size();
	archivo.write(reinterpret_cast<const char*>(&numHabitaciones), sizeof(numHabitaciones));
	
	for (const auto& par : reservasPorHabitacion) {
		long numeroHabitacion = par.first;
		const auto& reservas = par.second.reservas;
		
		// Guardar el número de habitación
		archivo.write(reinterpret_cast<const char*>(&numeroHabitacion), sizeof(numeroHabitacion));
		
		// Guardar el número de reservas para esta habitación
		size_t reservasSize = reservas.size();
		archivo.write(reinterpret_cast<const char*>(&reservasSize), sizeof(reservasSize));
		
		// Guardar cada reserva
		for (const auto& reserva : reservas) {
			long fechaEntradaEpoch = reserva.fechaEntrada.GetTicks();
			long fechaSalidaEpoch = reserva.fechaSalida.GetTicks();
			
			archivo.write(reinterpret_cast<const char*>(&fechaEntradaEpoch), sizeof(fechaEntradaEpoch));
			archivo.write(reinterpret_cast<const char*>(&fechaSalidaEpoch), sizeof(fechaSalidaEpoch));
		}
	}
	
	archivo.close();
}


void GestionCalendario::LeerDesdeArchivo() {
	ifstream archivo(nombreArchivos, ios::binary);
	if (!archivo) {
		throw runtime_error("No se pudo abrir el archivo para leer el calendario");
	}
	
	// Leer el número de habitaciones
	size_t numHabitaciones;
	archivo.read(reinterpret_cast<char*>(&numHabitaciones), sizeof(numHabitaciones));
	
	if (!archivo.good()) {
		throw runtime_error("Error al leer el número de habitaciones del archivo");
	}
	
	reservasPorHabitacion.clear();
	
	for (size_t i = 0; i < numHabitaciones; ++i) {
		long numeroHabitacion;
		archivo.read(reinterpret_cast<char*>(&numeroHabitacion), sizeof(numeroHabitacion));
		
		if (!archivo.good()) {
			throw runtime_error("Error al leer el número de habitación del archivo");
		}
		
		size_t reservasSize;
		archivo.read(reinterpret_cast<char*>(&reservasSize), sizeof(reservasSize));
		
		if (!archivo.good()) {
			throw runtime_error("Error al leer el tamaño de las reservas del archivo");
		}
		
		Reservas reservas;
		
		for (size_t j = 0; j < reservasSize; ++j) {
			long fechaEntradaEpoch, fechaSalidaEpoch;
			
			archivo.read(reinterpret_cast<char*>(&fechaEntradaEpoch), sizeof(fechaEntradaEpoch));
			archivo.read(reinterpret_cast<char*>(&fechaSalidaEpoch), sizeof(fechaSalidaEpoch));
			
			if (!archivo.good()) {
				throw runtime_error("Error al leer las fechas de una reserva del archivo");
			}
			
			wxDateTime fechaEntrada, fechaSalida;
			fechaEntrada.Set(fechaEntradaEpoch); // Convertir epoch a wxDateTime
			fechaSalida.Set(fechaSalidaEpoch);
			
			Reserva nuevaReserva = {fechaEntrada, fechaSalida};
			reservas.reservas.push_back(nuevaReserva);
		}
		
		reservasPorHabitacion[numeroHabitacion] = reservas;
	}
	
	archivo.close();
}
