#include "GestionTransacciones.h"
#include <fstream>
#include <cstring>
using namespace std;

GestionTransacciones::GestionTransacciones(string a_datos, string a_actividad) {
	archivoDatos = a_datos;
	archivoActividad = a_actividad;
	ifstream archi(archivoDatos.c_str(),ios::binary | ios:: in);
	
	if(!archi.is_open()){
		throw runtime_error("No pudo abrirse el archivo de Datos Transacciones");
	}
	Datos a;
	archi.read((char*)(&a),sizeof(Datos));
	CBU = a.CBU;
	alias = a.Alias;
	dinero = a.Dinero;
	contrasena = a.Contrasena;
	archi.close();
	
	ifstream archivo(archivoActividad.c_str(),ios::binary | ios::in|ios::ate);
	if(archivo.is_open()){    
		int tamanio_archivo = archivo.tellg();
		int cantHistorial = tamanio_archivo/sizeof(Historial);
		v.resize(cantHistorial);
		archivo.seekg(0,ios::beg);
		for (int i=0;i<cantHistorial;i++)
			v[i].LeerDesdeBinario(archivo);
		archivo.close();
	} else {
		throw runtime_error("No se pudo inicializar el archivo");
	}
	
}

long GestionTransacciones::verCBU(){return CBU;}

long GestionTransacciones::verDinero(){return dinero;}

string GestionTransacciones::verContrasena(){return contrasena;}

string GestionTransacciones::verAlias(){return alias;}

void GestionTransacciones::cambiarAlias(string nuevo){alias = nuevo;}

void GestionTransacciones::cambiarCBU(long nuevo){CBU = nuevo;}

void GestionTransacciones::cambiarContrasena(string nuevo){contrasena = nuevo;}

bool GestionTransacciones::Guardar(){
	ofstream archi(archivoDatos.c_str(),ios::binary);
	if(!archi.is_open()){
		throw runtime_error("No pudo abrirse el archivo de transacciones");
		return false;
	}
	Datos a;
	strcpy(a.Alias, alias.c_str());
	a.CBU = CBU;
	strcpy(a.Contrasena, contrasena.c_str());
	a.Dinero = dinero;
	
	archi.write(reinterpret_cast<char*>(&a), sizeof(Datos));
	archi.close();
	return true;
}

void GestionTransacciones::agregarHistorial(string motivo, long monto, bool gp, wxDateTime a) {
	ActividadReciente aux(motivo,monto,gp, a);
	v.insert(v.begin(),aux);
}

bool GestionTransacciones::GuardarActividad() {
	ofstream archivo(archivoActividad.c_str(), ios::binary|ios::trunc);
	if(!archivo.is_open()) throw runtime_error("El archivo de gestion de habitaciones tuvo un error");
	int cantidadHistorial = verCantidadHistorial();
	for (int i = 0; i<cantidadHistorial;i++){
		v[i].GuardarDesdeBinario(archivo);
	}
	archivo.close();
	return true;
}


void GestionTransacciones::actualizarDinero(bool x, long monto){
	if(x)
		dinero += monto;
	else 
		dinero -= monto;
}

int GestionTransacciones::verCantidadHistorial(){return v.size();}


ActividadReciente &GestionTransacciones::operator[](int i){return v[i];}

ActividadReciente &GestionTransacciones::verHistorial(int i){return v[i];}
void GestionTransacciones::agregarPersonaFiltro(ActividadReciente a){v_filtro.push_back(a);}
void GestionTransacciones::resetFiltro(){v_filtro.erase(v_filtro.begin(),v_filtro.end());}
int GestionTransacciones::verCantidadFiltro(){return v_filtro.size();}
ActividadReciente GestionTransacciones::verHistorialFiltro(int i){return v_filtro[i];}
