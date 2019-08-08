#ifndef DICCIONARIO_H
#define DICCIONARIO_H
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
	string* palabraAleatoria();
	~Diccionario();
};
#endif
