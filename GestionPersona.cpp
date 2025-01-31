#include "GestionPersona.h"
#include <fstream>
#include <algorithm>

GestionPersonas::GestionPersonas(string a_nombreArchivo) {
	nombreArchivo = a_nombreArchivo;
	ifstream archivo(nombreArchivo, ios::binary | ios::ate);  // 'ate' mueve el puntero al final para tellg()
	if (!archivo) {
		// Si el archivo no existe, crearlo
		ofstream nuevoArchivo(nombreArchivo, ios::binary);
		if (!nuevoArchivo) {
			throw runtime_error("No se pudo crear el archivo para leer el calendario");
		}
		nuevoArchivo.close();
		return;
	}
	if (!archivo) {
		cerr << "Error: No se pudo abrir el archivo binario de personas: " << nombreArchivo << endl;
		return;
	}
	
	streamsize tamanio_archivo = archivo.tellg();  // Obtener tamaño del archivo
	archivo.seekg(0, ios::beg);  // Volver al inicio para lectura
	
	if (tamanio_archivo % sizeof(reg_persona) != 0) {
		cerr << "Error: Archivo corrupto. Tamaño inesperado." << endl;
		return;
	}
	
	int cantidad_personas = tamanio_archivo / sizeof(reg_persona);
	personas.resize(cantidad_personas);
	
	for (int i = 0; i < cantidad_personas; i++) {
		personas[i].LeerDesdeBinario(archivo);
		if (!archivo.good()) {
			cerr << "Error: Fallo al leer datos de persona en índice " << i << endl;
			break;
		}
	}
	
	archivo.close();
}


bool GestionPersonas::Guardar() {
    ofstream archivo(nombreArchivo.c_str(), ios::binary|ios::trunc);
    if(!archivo.is_open()) throw runtime_error("El archivo de gestion de personas tuvo un error");
    int cantidadPersonas = CantidadDatos();
    for (int i = 0; i<cantidadPersonas;i++){
        personas[i].GuardarEnBinario(archivo);
    }
    archivo.close();
    return true;
}

Persona &GestionPersonas::operator[](int i){return personas[i];}

Persona &GestionPersonas::verPersona(int i){return personas[i];}

void GestionPersonas::agregarPersona(Persona p){
        personas.push_back(p);
}

void GestionPersonas::eliminarPersona(int i){
    personas.erase(personas.begin()+i);
}


int GestionPersonas::CantidadDatos() {
    return personas.size();
}

bool GestionPersonas::verHabitacionHuesped(long n){
	for(int i = 0 ; i < CantidadDatos(); i++){
		if(personas[i].verHab() == to_string(n)){
			return true;
		}
	}
	return false;
}

bool GestionPersonas:: repetirHabitacion(string nombreCompleto){
	size_t pos = nombreCompleto.find(','); string nombre, apellido;
	if (pos != string::npos) {
		apellido = nombreCompleto.substr(0, pos); 
		nombre = nombreCompleto.substr(pos + 2);
	}
	for(int i = 0; i < CantidadDatos(); i++){
		if(personas[i].verNombre() == nombre && personas[i].verApellido() == apellido){
			if(personas[i].verHab() == "-"){
				return false;
			}
			else{
				return true;
			}
		}
	}
	return false;
}





