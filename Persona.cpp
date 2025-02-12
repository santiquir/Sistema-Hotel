#include <iostream>
#include <cstring>
#include "Persona.h"
#include <fstream>
using namespace std;



Persona::Persona(string a_nombre, string a_apellido, string a_telefono, string a_hab,
				 string a_email, long a_DNI,long a_diaNac, long a_mesNac, long a_anioNac){
	nombre = a_nombre;
	apellido = a_apellido;
	telefono = a_telefono;
	email = a_email;
	hab = a_hab;
	DNI = a_DNI;
	dia = a_diaNac;
	mes = a_mesNac;
	anio = a_anioNac;
	fechaReserva = make_pair(wxDateTime::Now(), wxDateTime::Now());
	estadoTieneHabitacion = false;
	reservo_ocupo = false;
	rol = "-";
}

string Persona::verHab() const{return hab;}
string Persona::verNombre() const{return nombre;}
string Persona::verApellido() const{return apellido;}
string Persona::verMail() const{return email;}
long Persona::verDiaNacimiento() const{return dia;}
long Persona::verMesNacimiento() const{return mes;}
long Persona::verAnioNacimiento() const{return anio;}
string Persona::verTelefono() const{return telefono;}
long Persona::verDNI() const{return DNI;}
string Persona::verRol() const{return rol;}
pair<wxDateTime,wxDateTime> Persona::verFechaReserva() const{return fechaReserva;}

void Persona::modificarFechaReserva(wxDateTime entrada, wxDateTime salida){
	fechaReserva.first = entrada;
	fechaReserva.second = salida;
}
bool Persona::verEstadoTieneHabitacion() const{return estadoTieneHabitacion;}
bool Persona::verEstadoReservo_ocupo() const {return reservo_ocupo;}


void Persona::modificarRol(string nuevoRol){rol = nuevoRol;}
void Persona::modificarEstadoTieneHabitacion(){estadoTieneHabitacion = !estadoTieneHabitacion;}
void Persona::modificarReservo_ocupo(){reservo_ocupo = !reservo_ocupo;}
void Persona::modificarHab(string a_hab){hab = a_hab;}
void Persona::modificarNombre(string a_nombre){nombre = a_nombre;}
void Persona::modificarApellido(string a_apellido){apellido = a_apellido;}
void Persona::modificarEmail(string a_email){email = a_email;}
void Persona::modificarDNI(long a_DNI){DNI = a_DNI;}
void Persona::modificarTelefono(string a_telefono){telefono = a_telefono;}
void Persona::modificarDiaNacimiento(long a_Dia){dia = a_Dia;}
void Persona::modificarMesNacimiento(long a_Mes){mes = a_Mes;}
void Persona::modificarAnioNacimiento(long a_Anio){anio = a_Anio;}

void Persona::GuardarEnBinario(ofstream &archivo){
	reg_persona reg;
	strcpy(reg.nombre, nombre.c_str());
	strcpy(reg.apellido, apellido.c_str());
	strcpy(reg.email, email.c_str());
	strcpy(reg.telefono, telefono.c_str());
	strcpy(reg.hab, hab.c_str());
	reg.diaNac = dia;
	reg.mesNac = mes;
	reg.anioNac = anio;
	reg.DNI = DNI;
	strcpy(reg.rol, rol.c_str());
	reg.estadoTieneHabitacion = estadoTieneHabitacion;
	reg.reservo_ocupo = reservo_ocupo;
	reg.fechaEntradaEpoch = fechaReserva.first.IsValid() ? fechaReserva.first.GetTicks() : 0;
	reg.fechaSalidaEpoch = fechaReserva.second.IsValid() ? fechaReserva.second.GetTicks() : 0;
	archivo.write((char*) (&reg),sizeof(reg));
}

void Persona::LeerDesdeBinario(ifstream &archivo) {
	reg_persona reg;
	archivo.read((char*)&reg,sizeof(reg));
	nombre = reg.nombre;
	apellido = reg.apellido;
	email = reg.email;
	telefono = reg.telefono;
	hab = reg.hab;
	dia = reg.diaNac;
	mes = reg.mesNac;
	anio = reg.anioNac;
	DNI = reg.DNI;
	rol = reg.rol;
	estadoTieneHabitacion = reg.estadoTieneHabitacion ;
	reservo_ocupo = reg.reservo_ocupo;
	wxDateTime fechaEntrada, fechaSalida;
	fechaEntrada.Set(reg.fechaEntradaEpoch); 
	fechaSalida.Set(reg.fechaSalidaEpoch);    	
	fechaReserva.first = fechaEntrada;
	fechaReserva.second = fechaSalida;
}

string Persona::validarDatos() {
	string errores;
	
	// Validación del nombre
	if (nombre.empty()) errores += "El nombre está vacío\n";
	if (nombre.size() > 100) errores += "El nombre es demasiado largo\n";
	
	// Validación del apellido
	if (apellido.empty()) errores += "El apellido está vacío\n";
	if (apellido.size() > 100) errores += "El apellido es demasiado largo\n";
	
	// Validación del teléfono
	if (telefono.empty()) errores += "El teléfono está vacío\n";
	if (telefono.size() > 12) errores += "El teléfono es demasiado largo\n";
	
	// Validación del email
	if (email.empty()) errores += "El email está vacío\n";
	if (email.size() > 100) errores += "El email es demasiado largo\n";
	
	// Validación del DNI
	if (DNI <= 0) errores += "El DNI es inválido o está vacío\n";
	
	// Validación de la fecha
	if (dia <= 0 || dia > 31) errores += "El día de nacimiento es inválido\n";
	if (mes <= 0 || mes > 12) errores += "El mes de nacimiento es inválido\n";
	if (anio <= 1900 || anio > 2100) errores += "El año de nacimiento es inválido\n";
	
	return errores;
}

bool Persona::operator ==(const Persona& otra) const{
	return this->verNombre() == otra.verNombre() && this->verApellido() == otra.verApellido(); // Compara por número de habitación
}
