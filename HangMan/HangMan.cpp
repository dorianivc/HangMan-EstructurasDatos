#include "HangMan.h"
#include <iostream>

HangMan::HangMan()
{
	dic = new Diccionario();
	draw = new Dibujo();
	laPalabra = dic->palabraAleatoria();
	formada = new string(laPalabra->size(),'-');
	intentos = 0;
	acertados = 0;
}

HangMan::~HangMan()
{
	delete dic;
	delete draw;
}

void HangMan::jugar()
{
	int indiceImpresion = 7;
	imprimirDibujo(indiceImpresion);
	cout << "La palabra : " << *laPalabra << endl;
	cout << "Formada : " << *formada << endl;

}

void HangMan::imprimirDibujo(int i)
{
	for (i; i < 12; i++) {
		cout << *draw->getDibujo()[i] << endl;
	}
}


