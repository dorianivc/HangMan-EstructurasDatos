#include "Diccionario.h"
#include <iostream>
// Diccionario.h
// Autor: Dorian Vallecillo Calderon
// Descripción: se encarga de leer las palabras desde el archivo de texto y almacenarlas.

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
	archivoFisico.close();
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

string Diccionario::palabraAleatoria()
{
sort(palabras.begin(), palabras.end());
random_shuffle(palabras.begin(), palabras.end());
return **palabras.begin();
}

Diccionario::~Diccionario()
{
	palabras.clear();
}
