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
			bool verHabitacionHuesped(long n); 
			bool repetirHabitacion(string a); 
				
            bool Guardar();
            int CantidadDatos();
			
};
#endif
