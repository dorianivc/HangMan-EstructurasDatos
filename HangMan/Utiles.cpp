#include "Utiles.h"
// Utiles.cpp
// Autor: Dorian Vallecillo Calderon
// Descripción: Se encarga estandarizar la limpieza de pantalla para sistemas iguales y difetentes a Windows 

void Utiles::limpiar_pantalla()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

