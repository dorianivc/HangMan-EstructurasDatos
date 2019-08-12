#ifndef HANGMAN_H
#define HANGMAN_H
#include "Dibujo.h"
#include <conio.h>
#include "Utiles.h"
// HangMan.h
// Autor: Dorian Vallecillo Calderon
// Descripción: Se encarga de la interaccion con el usuario.
#include "Diccionario.h"
using namespace std;

class HangMan
{
private:
	Diccionario* dic;
	Dibujo* draw;
	string laPalabra;
	string formada;
	int intentos;
public:
	HangMan();
	~HangMan();
	void jugar();
	bool existeLetra(char);
	vector<int> posicionesAcertadas(char);
	void imprimirDibujo(int);
};

#endif 