#pragma once
#include <iostream>
#include "Figura.h"
using namespace std;
class Redondo : public Figura
{
private :
	
	float radio;
	string nombre;

//metodos de acceso(lectura) y mutacion(cambiar)

public:
	

	float getRadio();

	Redondo();
	Redondo(float ra);
	Redondo(float x, float y, float r);

	void trasladar(float dx, float dy);
	void trasladar(Redondo c);

//tres tipos de acceso
	/*public
	private
	protected*/
};

