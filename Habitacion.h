#ifndef HABITACION_H
#define HABITACION_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct habitacion_str {
    char tipoStr[10];
	long precioStr;
    bool estadoStr; 
	long numeroStr;
};

class Habitacion{
    private:
        string tipo; long precio; bool estado; long numero;
    public:
        Habitacion(string a_tipo="",long a_precio=0,bool a_estado = false, long a_numero = 0);
        bool operator<(const Habitacion &a);
        string verTipo() const;
        float verPrecio() const;
        bool verEstado() const;
        int verNumero() const;

        void actualizarTipo(string t);
        void actualizarNumero(int n);
        void actualizarPrecio(float p);
        void actualizarEstado(); //true: ocupado ; false: libre
        void GuardarEnBinario(ofstream &archivo);
        void LeerDesdeArchivo(ifstream &archivo); 
        string validarHabitacion();
};

#endif
