#ifndef HANGMAN_H
#define HANGMAN_H
#include "Dibujo.h"
#include "Diccionario.h"
using namespace std;

class HangMan
{
private:
	Diccionario* dic;
	Dibujo* draw;
	string* laPalabra;
	string* formada;
	int intentos;
	int acertados;
public:
	HangMan();
	~HangMan();
	void jugar();
	void imprimirDibujo(int);
};

#endif 