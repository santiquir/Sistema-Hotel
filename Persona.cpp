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
}

string Persona::validarDatos() {
	string errores;
	
	// Validaci�n del nombre
	if (nombre.empty()) errores += "El nombre est� vac�o\n";
	if (nombre.size() > 100) errores += "El nombre es demasiado largo\n";
	
	// Validaci�n del apellido
	if (apellido.empty()) errores += "El apellido est� vac�o\n";
	if (apellido.size() > 100) errores += "El apellido es demasiado largo\n";
	
	// Validaci�n del tel�fono
	if (telefono.empty()) errores += "El tel�fono est� vac�o\n";
	if (telefono.size() > 12) errores += "El tel�fono es demasiado largo\n";
	
	// Validaci�n del email
	if (email.empty()) errores += "El email est� vac�o\n";
	if (email.size() > 100) errores += "El email es demasiado largo\n";
	
	// Validaci�n del DNI
	if (DNI <= 0) errores += "El DNI es inv�lido o est� vac�o\n";
	
	// Validaci�n de la fecha
	if (dia <= 0 || dia > 31) errores += "El d�a de nacimiento es inv�lido\n";
	if (mes <= 0 || mes > 12) errores += "El mes de nacimiento es inv�lido\n";
	if (anio <= 1900 || anio > 2100) errores += "El a�o de nacimiento es inv�lido\n";
	
	return errores;
}

