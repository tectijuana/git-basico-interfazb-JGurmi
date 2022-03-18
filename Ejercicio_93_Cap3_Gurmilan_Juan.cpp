#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;

/*
*Ejercicio 93:Capitulo 3
*
*Cual es el area de un circulo cuyo radio es de 8cm?
*
*/

//@Author   JGurmi
//@Date     14 de marzo del 2022

int main()
{
    double r=8;
    
    double A= M_PI*(r*r); //formula para calcular el area

    
    cout<<"El area de uun circulo es: "<<A;
    cout<<" cm aproximadamente..";
    return 0;
}
