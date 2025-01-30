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

/*double GestionHabitaciones::dineroTotalGanado(){
	double dinero = 0;
	
	for(size_t i = 0; i < habitaciones.size();i++){
		if(habitaciones[i].verEstado() == true){
			dinero += habitaciones[i].verPrecio();
		}
	}
	return dinero;
}
*/

