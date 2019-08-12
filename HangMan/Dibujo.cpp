// Dibujo.cpp
// Autor: Dorian Vallecillo Calderon
// Descripción: contiene el dibujo del juego Ahorcado, se encarga de generarlo e imprimirlo;
#include "Dibujo.h"

Dibujo::Dibujo()
{
	dibujo.push_back(new string("               O"));
	dibujo.push_back(new string("               ----- o"));
	dibujo.push_back(new string("             / | \134   |"));
	dibujo.push_back(new string("              [ ]    |"));
	dibujo.push_back(new string("              / \134    |"));
	dibujo.push_back(new string("                     |"));
	dibujo.push_back(new string("                     |"));
	dibujo.push_back(new string("                     |"));
	dibujo.push_back(new string("                     |"));
	dibujo.push_back(new string("                ----------------------------------"));
	dibujo.push_back(new string("                | Hang Man by Dorian Vallecillo   |"));
	dibujo.push_back(new string("                ------ ---------------------------"));

}

vector<string*> Dibujo::getDibujo()
{
	return dibujo;
}

string Dibujo::toString()
{
	stringstream p;
	vector<string*>::iterator elementos;
	for (elementos=dibujo.begin(); elementos!=dibujo.end(); elementos++) {
		p << **elementos << endl;
	}
	return p.str();
}

Dibujo::~Dibujo()
{
	dibujo.clear();
}
