#ifndef GESTIONCALENDARIO_H
#define GESTIONCALENDARIO_H

#include <wx/datetime.h>
#include <vector>
#include <unordered_map>
#include "GestionHabitaciones.h"
#include "GestionPersona.h"

using namespace std;

// Estructura para almacenar una reserva con fecha de entrada y salida
struct Reserva {
	wxDateTime fechaEntrada;
	wxDateTime fechaSalida;
};

struct Reservas {
	vector<Reserva> reservas; // Cambiado para almacenar pares de fechas
};

class GestionCalendario {
private:
	unordered_map<long, Reservas> reservasPorHabitacion; 
	string nombreArchivos;
	
public:
	GestionCalendario(string a_archivos);
	
	void AgregarReserva(const wxDateTime &fechaEntrada, const wxDateTime &fechaSalida, long numeroHabitacion); 
	void QuitarReserva(const wxDateTime &fechaEntrada, long numeroHabitacion);  
	void ModificarReserva(const wxDateTime &fechaEntradaAntigua, const wxDateTime &fechaEntradaNueva, const wxDateTime &fechaSalidaNueva ,long numeroHabitacion); 
	bool BuscarReserva(const wxDateTime &fechaEntrada, const wxDateTime &fechaSalida, long numeroHabitacion); 
	vector<Reserva> ObtenerReservas(long numeroHabitacion); 
	void FiltrarPorHabitacion(long numeroHabitacion);
	
	void GuardarEnArchivo();
	void LeerDesdeArchivo();
};

#endif
