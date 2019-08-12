#include "HangMan.h"
#include <iostream>
// HangMan.cpp
// Autor: Dorian Vallecillo Calderon
// Descripción: Se encarga de la interaccion con el usuario.

HangMan::HangMan()
{
	dic = new Diccionario();
	draw = new Dibujo();
	laPalabra = dic->palabraAleatoria();
	formada = string(laPalabra.size(), '-');
	intentos = 0;
}

HangMan::~HangMan()
{
	delete dic;
	delete draw;
}

void HangMan::jugar()
{
	int indiceImpresion = 7;
	bool termina = false;
	do {
		string letraEntrante;
		char letra;
		imprimirDibujo(indiceImpresion);
		cout << endl << endl << endl;
		cout << "Intentos: " << intentos << endl;
		//cout << "La palabra : " << laPalabra << endl;
		cout << "Palabra : " << formada << endl;
		cout << "Ingrese una letra" << endl;
		getline(cin, letraEntrante);
		letra =  tolower(letraEntrante[0]);
		if (existeLetra(letra)) {
			vector<int> posicionesAcertadasPorElUsuario= posicionesAcertadas(letra);
			for (unsigned i = 0; i < posicionesAcertadasPorElUsuario.size(); i++) {
				formada[posicionesAcertadasPorElUsuario[i]] = letra;
			}
			
			
		}
		else {
			intentos++;
			indiceImpresion--;
			
		}
		if (laPalabra == formada) {
			cout << "Ha ganado la partida" << endl;
			cout << "La palabra es : " << laPalabra << endl;
			termina = true;
		}
		if (intentos == 7) {
			Utiles::limpiar_pantalla();
			cout << "Ha perdido la partida" << endl;
			cout << "La palabra era : " << laPalabra << endl;
			termina = true;
			imprimirDibujo(indiceImpresion);
		}
		cout << "Presione enter" << endl;
		cin.get();
		Utiles::limpiar_pantalla();

	} while (!termina);

}

bool HangMan::existeLetra(char entrante)
{
	if (laPalabra.find(entrante) != laPalabra.npos) {
		return true;
	}
	else
		return false;
}

vector<int> HangMan::posicionesAcertadas(char entrante)
{
	vector<int> posiciones;
	for (unsigned i = 0; i < laPalabra.length(); i++) {
		if (laPalabra[i] == entrante) {
			posiciones.push_back(i);
		}
	}
	return posiciones;
}

void HangMan::imprimirDibujo(int i)
{
	for (i; i < 12; i++) {
		cout << *draw->getDibujo()[i] << endl;
	}
}


