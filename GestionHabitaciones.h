#ifndef GESTIONHABITACIONES_H
#define GESTIONHABITACIONES_H


#include <iostream>
#include <vector>
#include "Habitacion.h"
using namespace std;

class GestionHabitaciones{
    private:
        string nombreArchivo;
        vector<Habitacion> habitaciones;
    public:
        GestionHabitaciones(string archivo);
           int verCantidadHabitaciones() const;
           bool agregarHabitacion(Habitacion h);
           void eliminarHabitacion(int numero);
		   Habitacion &operator[](int i);
		   Habitacion&verHabitacion(int i);
		   
           bool guardar();
		   void ordenarHabitaciones();
		   double dineroTotalGanado();
};
#endif
