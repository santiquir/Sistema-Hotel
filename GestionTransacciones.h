#ifndef GESTIONTRANSACCIONES_H
#define GESTIONTRANSACCIONES_H
#include <string>
#include <vector>
#include "ActividadReciente.h"
using namespace std;

struct Datos{
	long CBU;
	char Alias[100];
	char Contrasena[11];
	long Dinero;
};

class GestionTransacciones {
private:
	string archivoDatos, archivoActividad;
	string alias, contrasena;
	long dinero, CBU;
	vector<ActividadReciente> v;vector<ActividadReciente> v_filtro;
public:
	GestionTransacciones(string datos, string actividad);
	long verCBU();
	string verAlias();
	string verContrasena();
	long verDinero();
	
	void cambiarCBU(long nuevo);
	void cambiarAlias(string nuevo);
	void cambiarContrasena(string nuevo);
	void actualizarDinero(bool x, long monto);
	void agregarPersonaFiltro(ActividadReciente a);
	void resetFiltro();
	int verCantidadFiltro();
	ActividadReciente verHistorialFiltro(int i);
	
	bool Guardar();
	void agregarHistorial(string motivo, long monto, bool gp,wxDateTime a);
	int verCantidadHistorial();
	ActividadReciente &operator[](int i);
	ActividadReciente &verHistorial(int i);
	bool GuardarActividad();
};

#endif
