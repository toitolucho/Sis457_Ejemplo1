// Sis457_Ejemplo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Redondo.h"
#include "Rectangulo.h"
#include "Triangulo.h"
//clase - es una definicion abstracta que agrupa informacion(estructura de datos)
// 
// 
//objeto -> instancia de una clase (que es algo concreto con valores)
int main()
{
    // este vector almacenara edades
    int x[10];

    int z;
    Redondo a1, a2;
    Redondo a4(3, 3, 9);
    
    a4.trasladar(2, 2);
    a1.trasladar(a4);

    Figura f1;
    Rectangulo rec1;    
    Redondo red1;
    Triangulo tr1;
    cout << "X =" << red1.getCoordenadaX() << endl;

   /* a1.coordenadaX = 3;
    a1.coordenadaY = 2;
    a1.radio = 1;
    a1.nombre = "A1";

  

    a1.coordenadaX += 2;
    a1.coordenadaY += 2;

    a1.coordenadaX = a1.coordenadaX + 2;
    a1.coordenadaY = a1.coordenadaY + 2;


    cout << a1.nombre << endl;*/
   
   /* float t;
    Redondo a2;*/
    //a2.nombre = "A2";
  


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
