#ifndef HABITACION_H
#define HABITACION_H
#include <iostream>
#include <string>
#include <vector>
#include <wx/datetime.h>
using namespace std;

struct habitacion_str {
    char tipoStr[10];
	long precioStr;
	long numeroStr;
	bool estadoStr;
	long capacidadStr;
};

class Habitacion{
    private:
        string tipo; long precio; long numero; bool estado; long  capacidad;
    public:
        Habitacion(string a_tipo="",long a_precio=0, long a_numero = 0, long a_capacidad = 0);
        bool operator<(const Habitacion &a);
        string verTipo() const;
        float verPrecio() const;
        int verNumero() const;
		bool verEstado() const;
		int verCapacidad() const;
		
		void actualizarCapacidad(int n);
		void actualizarEstado();
        void actualizarTipo(string t);
        void actualizarNumero(int n);
        void actualizarPrecio(float p);
        void GuardarEnBinario(ofstream &archivo);
        void LeerDesdeArchivo(ifstream &archivo); 
        string validarHabitacion();
		bool operator==(const Habitacion& otra) const;
		
};

#endif
