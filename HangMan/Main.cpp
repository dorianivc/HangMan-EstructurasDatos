#include "Dibujo.h"
#include "Diccionario.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Dibujo* hangMan = new Dibujo();
	cout << hangMan->toString() << endl;
	string ped = "Hola Mundo";

	if (ped.find('a') != ped.npos) {//PROBANDO METODO NPOS
		cout << " a, se encuentra en la cadena" << endl;
	}
	string::iterator palabra;
	for (palabra = ped.begin(); palabra != ped.end(); ++palabra) {
		cout << *palabra << endl;
	}
	palabra--;
	ped.replace(palabra--, palabra, "x");
	cout << ped << endl;
	Diccionario* dic = new Diccionario();
	cout << dic->toString() << endl;

	cout << "Obteniendo palabra aleatoria" << endl;
	cout << *dic->palabraAleatoria() << endl;
	delete dic;
	delete hangMan;
	cin.get();
	return 0;
}