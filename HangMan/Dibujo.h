#ifndef DIBUJO_H
#define DIBUJO_H
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
class Dibujo
{
private:
	vector<string*> dibujo;
public:
	Dibujo();
	string toString();
	~Dibujo();
};
#endif
