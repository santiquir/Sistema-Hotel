#include "ActividadReciente.h"
#include <cstring>
#include <string>

ActividadReciente::ActividadReciente(string a_motivo, long a_monto, bool a_gp, wxDateTime a_fecha){
	motivo = a_motivo;
	monto = a_monto;
	gp = a_gp;
	fecha = a_fecha;
}


string ActividadReciente::verMotivo() const{return motivo;}
long ActividadReciente::verMonto() const{return monto;}
bool ActividadReciente::verGP() const{return gp;}


void ActividadReciente::LeerDesdeBinario(ifstream &archivo) {
	Historial reg;
	archivo.read((char*)&reg,sizeof(reg));
	gp = reg.gp;
	motivo = reg.motivo;
	monto = reg.monto;
	fecha.Set(reg.fecha.GetTicks());
}

void ActividadReciente::GuardarDesdeBinario(ofstream &archivo) {
	Historial reg;
	
	strcpy(reg.motivo, motivo.c_str());
	reg.monto = monto;
	reg.gp = gp;
	reg.fecha = fecha.GetTicks();
	
	archivo.write((char*)&reg,sizeof(reg));
}

wxDateTime ActividadReciente::verFecha() const{return fecha;}
