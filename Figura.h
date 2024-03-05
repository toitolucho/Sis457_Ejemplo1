#pragma once
class Figura
{
protected:
	float coordenadaX;
	float coordenadaY;

public :
	Figura();

	void calcularArea();
	void calcularPerimetro();

	float getCoordenadaX();
	float getCoordenadaY();

	void setCoordenadaX(float datoX);
	void setCoordenadaY(float datoY);
};

