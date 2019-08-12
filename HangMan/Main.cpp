// Main.cpp
// Autor: Dorian Vallecillo Calderon	
// Descripción: funcion principal del programa
#include "Utiles.h"
#include "Dibujo.h"
#include "Diccionario.h"
#include "HangMan.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	bool finaliza = false;
	do {
		cout << endl << endl << endl;
		cout << "Bienvenidos a Ahorcado" << endl;
		cout << "Ingrese 1 para jugar" << endl;
		cout << "Ingrese 2 para salir" << endl;
		string entrada;
		getline(cin, entrada);
		if (atoi(entrada.c_str()) == 1) {
			Utiles::limpiar_pantalla();
			HangMan* juego = new HangMan();
			juego->jugar();
			delete juego;
		}
		else if (atoi(entrada.c_str()) == 2) {
			finaliza = true;
			return 0;
		}
		else {
			Utiles::limpiar_pantalla();
		}
	} while (!finaliza);
	
	cin.get();
	return 0;
}