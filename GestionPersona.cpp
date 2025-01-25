#include "GestionPersona.h"
#include <fstream>
#include <algorithm>

GestionPersonas::GestionPersonas(string a_nombreArchivo){
    nombreArchivo = a_nombreArchivo;
    ifstream archivo(nombreArchivo.c_str(),ios::binary | ios::ate);
    if(archivo.is_open()){    
        int tamanio_archivo = archivo.tellg();
		int cantidad_personas = tamanio_archivo/sizeof(reg_persona);
		personas.resize(cantidad_personas);
		archivo.seekg(0,std::ios::beg);
		for (int i=0;i<cantidad_personas;i++)
			personas[i].LeerDesdeBinario(archivo);
		archivo.close();
    }
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




