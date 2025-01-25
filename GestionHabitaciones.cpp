#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "GestionHabitaciones.h"

GestionHabitaciones::GestionHabitaciones(string a_archivo){
	nombreArchivo = a_archivo;
	
	ifstream archivo(nombreArchivo.c_str(),ios::binary | ios::in|ios::ate);
	if(archivo.is_open()){    
		int tamanio_archivo = archivo.tellg();
		int cantHabitaciones = tamanio_archivo/sizeof(habitacion_str);
		habitaciones.resize(cantHabitaciones);
		archivo.seekg(0,std::ios::beg);
		for (int i=0;i<cantHabitaciones;i++)
			habitaciones[i].LeerDesdeArchivo(archivo);
		archivo.close();
	} else {
		throw runtime_error("No se pudo inicializar el archivo");
	}
}

bool GestionHabitaciones::agregarHabitacion(Habitacion h){
	size_t cont=0;
	for(size_t i = 0; i < habitaciones.size();i++){
		if(habitaciones[i].verNumero()!=h.verNumero()){
			cont++;
		}
	}
	if(cont == habitaciones.size()){
		habitaciones.push_back(h);
		sort(habitaciones.begin(),habitaciones.end()); // no seguros de que este bien
		return true;
	}
	return false;
}

void GestionHabitaciones::ordenarHabitaciones(){
	sort(habitaciones.begin(),habitaciones.end());
}

int GestionHabitaciones::verCantidadHabitaciones() const{return habitaciones.size();}

void GestionHabitaciones::eliminarHabitacion(int i){
	habitaciones.erase(habitaciones.begin()+i);
}

int GestionHabitaciones::habitacionesLibres(){
	int aux = 0;
	for(size_t i = 0; i < habitaciones.size();i++){
		if(habitaciones[i].verEstado() == false){
			aux++; 
		}
	}
	return aux;
}

int GestionHabitaciones::habitacionesOcupadas(){
	int aux = 0;
	for(size_t i = 0; i < habitaciones.size();i++){
		if(habitaciones[i].verEstado() == true){
			aux++; 
		}
	}
	return aux;
}

//"False" no pudo reservar, "True" reservo.
bool GestionHabitaciones::reservar(int numero) {
	for (size_t i = 0; i < habitaciones.size(); i++) {
		if (habitaciones[i].verNumero() == numero) {
			// Verifica si está ocupado
			if (habitaciones[i].verEstado() == true) {
				return false; // Ya está ocupado
			}
			// Cambiar el estado a ocupado
			habitaciones[i].actualizarEstado();
			return true;
		}
	}
	return false; // No se encontró la habitación
}

//"true" quito la reserva, "false" no pudo quitar la reserva por x motivo.
bool GestionHabitaciones::quitarReserva(int numero) {
	for (size_t i = 0; i < habitaciones.size(); i++) {
		if (habitaciones[i].verNumero() == numero) {
			// Verificar si está ocupado
			if (habitaciones[i].verEstado() == true) {
				// Cambiar el estado a libre
				habitaciones[i].actualizarEstado();
				return true;
			}
		}
	}
	return false; // No se encontró la habitación o ya estaba libre
}

bool GestionHabitaciones::guardar() {
	ofstream archivo(nombreArchivo.c_str(), ios::binary|ios::trunc);
	if(!archivo.is_open()) throw runtime_error("El archivo de gestion de habitaciones tuvo un error");
	int cantidadHabitaciones = verCantidadHabitaciones();
	for (int i = 0; i<cantidadHabitaciones;i++){
		habitaciones[i].GuardarEnBinario(archivo);
	}
	archivo.close();
	return true;
}


Habitacion &GestionHabitaciones::operator[](int i){return habitaciones[i];}

Habitacion &GestionHabitaciones::verHabitacion(int i){return habitaciones[i];}

double GestionHabitaciones::dineroTotalGanado(){
	double dinero = 0;
	
	for(size_t i = 0; i < habitaciones.size();i++){
		if(habitaciones[i].verEstado() == true){
			dinero += habitaciones[i].verPrecio();
		}
	}
	return dinero;
}


