#ifndef ACTIVIDADRECIENTE_H
#define ACTIVIDADRECIENTE_H
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

struct Historial{
	char motivo[100];
	long monto;
	bool gp;
};
class ActividadReciente{
private:
	string motivo;
	long monto;
	bool gp;
public:
	ActividadReciente(string a_motivo = "", long a_monto = 0, bool gp = false);
	string verMotivo() const;
	long verMonto() const;
	bool verGP() const;
	void LeerDesdeBinario(ifstream &archivo);
	void GuardarDesdeBinario(ofstream &archivo);
	
};

#endif
