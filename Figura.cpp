#include "Figura.h"


Figura::Figura()
{
	coordenadaX = coordenadaY = -1;
}

float Figura::getCoordenadaX()
{
	return coordenadaX;
}
float Figura::getCoordenadaY()
{
	return coordenadaY;
}
void Figura::setCoordenadaX(float datoX)
{
	coordenadaX = datoX;
}
void Figura::setCoordenadaY(float datoY)
{
	coordenadaY = datoY;
}