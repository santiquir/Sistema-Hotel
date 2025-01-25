#ifndef GESTIONPERSONA_H
#define GESTIONPERSONA_H
#include "Persona.h"
#include <iostream>
#include <vector>
using namespace std;

class GestionPersonas{
    private:
        string nombreArchivo;
        vector<Persona> personas;
    public:
        GestionPersonas(string archivo);
            void agregarPersona(Persona p);
            void eliminarPersona(int i);
            Persona &operator[](int i);
            Persona &verPersona(int i);
			
            bool Guardar();
            int CantidadDatos();

            int BuscarNombre(std::string parte_nombre, int pos_desde);
	        int BuscarApellido(std::string parte_apellido, int pos_desde);
	        int BuscarApellidoYNombre(std::string parte_apellido, int pos_desde);
	        int BuscarDireccion(std::string parte_direccion, int pos_desde);
	        int BuscarTelefono(std::string parte_telefono, int pos_desde);
	        int BuscarEmail(std::string parte_correo, int pos_desde);
	        int BuscarCiudad(std::string parte_ciudad, int pos_desde);
	        int BuscarNacimiento(int dia, int mes, int anio, int pos_desde);
            
};
#endif
