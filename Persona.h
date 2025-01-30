#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
#include <vector>
#include <wx/datetime.h>
using namespace std;

struct reg_persona{
    char nombre[100];
    char apellido[100];
    char email[100];
    char telefono[12];
	char hab[2];
	long diaNac,mesNac,anioNac, DNI;
	long fechaEntradaEpoch;
	long fechaSalidaEpoch;
	bool estado;
};
class Persona{
    private:
        string nombre, apellido, email, telefono, hab;
		long DNI, dia, mes, anio;
		pair<wxDateTime,wxDateTime> fechaReserva;
		bool estado;
		;
    public:
        Persona(string a_nombre="", string a_apellido="", string a_telefono="", string a_hab="-",
		    string a_email="", long a_DNI=0, long a_diaNac=0, long a_mesNac=0, long a_anioNac=0);

        string validarDatos();
		string verHab() const;
		pair<wxDateTime,wxDateTime> verFechaReserva() const;
        string verNombre() const;
        string verApellido() const;
        string verMail() const;
        long verMesNacimiento() const;
        long verAnioNacimiento() const;
        long verDiaNacimiento() const;
		long verDNI() const;
        string verTelefono() const;
		bool verEstado() const;
		
		void modificarEstado();
		void modificarFechaReserva(wxDateTime entrada, wxDateTime salida);
		void modificarHab(string a_hab);
        void modificarNombre(string a_nombre);
        void modificarApellido(string a_apellido);
        void modificarDNI(long a_DNI);
		void modificarDiaNacimiento(long a_Dia);
		void modificarMesNacimiento(long a_Mes);
		void modificarAnioNacimiento(long a_Anio);
        void modificarTelefono(string a_telefono);
        void modificarEmail(string a_email);
        void GuardarEnBinario(ofstream &archivo);
        void LeerDesdeBinario(ifstream &archivo);

};

#endif
