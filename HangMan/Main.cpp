#include "Dibujo.h"
#include <iostream>
using namespace std;

int main() {
	Dibujo* hangMan = new Dibujo();
	cout << hangMan->toString() << endl;
	delete hangMan;
	cin.get();
	return 0;
}