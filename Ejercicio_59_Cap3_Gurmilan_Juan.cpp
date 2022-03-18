
#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;

/*
*Ejercicio 59:Capitulo 3
*
*Calcular e imprimir el volumen de un cilindro de radio r y altura h. En este
problema, r=10 cm y h= 32cm. Usar la formula V= pi*r2*h
*
*/

//@Author   JGurmi
//@Date     14 de marzo del 2022

int main()
{
    double r= 10;
    double h= 32;
    
    double V= (M_PI*pow(r,2)*h);
    
    cout<<"El Volumen total del cilindro es: "<<V;
}
