#include "Herramientas.h"

void ConvertirEnMinuscula(string &s) {
	int c=s.size();
	for (int i=0;i<c;i++)
		s[i]=tolower(s[i]);
}

