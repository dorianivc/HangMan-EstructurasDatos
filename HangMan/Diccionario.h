// Diccionario.h
// Autor: Dorian Vallecillo Calderon
// Descripción: se encarga de leer las palabras desde el archivo de texto y almacenarlas.
#ifndef DICCIONARIO_H
#define DICCIONARIO_H
#include <random>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <algorithm>  
using namespace std;
class Diccionario
{
private:
	vector<string*> palabras;
public:
	Diccionario();
	string toString();
	string palabraAleatoria();
	~Diccionario();
};
#endif
