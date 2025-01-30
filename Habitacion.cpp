#include "Habitacion.h"
#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;

Habitacion::Habitacion(string a_tipo,long a_precio, long a_numero){
    tipo = a_tipo;
    precio = a_precio;
    numero = a_numero;
}

bool Habitacion::operator<(const Habitacion& a) {
    return this->verNumero()<a.verNumero();
}

int Habitacion::verNumero() const{return numero;}
string Habitacion::verTipo() const{return tipo;}
float Habitacion::verPrecio() const{return precio;}

void Habitacion::actualizarNumero(int n) {numero = n;}
void Habitacion::actualizarTipo(string t) {tipo = t;}
void Habitacion::actualizarPrecio(float p) {precio = p;}

void Habitacion::GuardarEnBinario(ofstream &archivo) {
    habitacion_str reg;
    strcpy(reg.tipoStr, tipo.c_str());
    reg.precioStr = precio;
    reg.numeroStr = numero;
    archivo.write((char*)(&reg), sizeof(reg));
}

void Habitacion::LeerDesdeArchivo (ifstream &archivo) {
    habitacion_str reg;
    archivo.read((char*)(&reg), sizeof(reg));
    tipo = reg.tipoStr;
    precio = reg.precioStr;
    numero = reg.numeroStr;
}

string Habitacion::validarHabitacion(){
    string errores;
    if(numero == 0) errores += "El numero esta vacio \n";
    if(tipo.size() == 0) errores += "El tipo esta vacio \n";
    if(precio == 0) errores += "El precio esta vacio \n";

    return errores;
}
