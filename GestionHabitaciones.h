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
        int libres, ocupadas;
    public:
        GestionHabitaciones(string archivo);
           int verCantidadHabitaciones() const;
           bool agregarHabitacion(Habitacion h);
           void eliminarHabitacion(int numero);
           int habitacionesLibres();
		   Habitacion &operator[](int i);
		   Habitacion&verHabitacion(int i);
		   
           int habitacionesOcupadas();
           bool reservar(int numero);
           bool quitarReserva(int numero);
           bool guardar();
		   void ordenarHabitaciones();
		   double dineroTotalGanado();
};
#endif
