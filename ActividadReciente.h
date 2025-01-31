#ifndef ACTIVIDADRECIENTE_H
#define ACTIVIDADRECIENTE_H
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <wx/datetime.h>
using namespace std;

struct Historial{
	char motivo[100];
	long monto;
	bool gp;
	wxDateTime fecha;
};
class ActividadReciente{
private:
	string motivo;
	long monto;
	bool gp;
	wxDateTime fecha;
public:
	ActividadReciente(string a_motivo = "", long a_monto = 0, bool gp = false,wxDateTime a_fecha=wxDateTime::Now());
	string verMotivo() const;
	long verMonto() const;
	bool verGP() const;
	wxDateTime verFecha() const;
	void LeerDesdeBinario(ifstream &archivo);
	void GuardarDesdeBinario(ofstream &archivo);
	
};

#endif
