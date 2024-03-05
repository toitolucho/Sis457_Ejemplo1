#include "Redondo.h"



Redondo::Redondo()
{
	radio = 1;
	coordenadaX = coordenadaY = 0;
	nombre = "C1";
}
Redondo::Redondo(float ra) 
{
	radio = ra;
	coordenadaX = coordenadaY = 0;
	nombre = "C2";
}
Redondo::Redondo(float x, float y, float r)
{
	radio = r;
	coordenadaX = x;
	coordenadaY = y;
	nombre = "Circulito";
}

void Redondo::trasladar(float dx, float dy)
{
	coordenadaX = dx;
	coordenadaY = dy;
}
void Redondo::trasladar(Redondo c)
{
	coordenadaX = c.getCoordenadaX();
	coordenadaY = c.getCoordenadaY();
}