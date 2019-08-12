// Utiles.h
// Autor: Dorian Vallecillo Calderon
// Descripción: Se encarga estandarizar la limpieza de pantalla para sistemas iguales y difetentes a Windows 

#ifndef UTILES_H
#define UTILES_H
#ifdef _WIN32
#include<windows.h>
#endif  


class Utiles
{
public:
	static void limpiar_pantalla();
};

#endif