#include "Diccionario.h"
#include <iostream>

Diccionario::Diccionario()
{
	ifstream archivoFisico;
	string p;
	archivoFisico.open("Diccionario.txt");
	if (!archivoFisico.fail()) {
		while (!archivoFisico.eof()) {
			getline(archivoFisico, p, '\n');
			palabras.push_back(new string(p));
		}
	}
	else {
		cout << "Archivo diccionario no existe o se encuentra dañado" << endl;
	}
}

string Diccionario::toString()
{
	stringstream p;
	vector<string*>::iterator ps;
	for (ps = palabras.begin(); ps != palabras.end(); ++ps) {
		p << **ps << endl;
	}
	return p.str();
}

string* Diccionario::palabraAleatoria()
{
vector<string*>::iterator z;
random_shuffle(palabras.begin(), palabras.end());
z = palabras.begin();
return *z;
}

Diccionario::~Diccionario()
{
	palabras.clear();
}
