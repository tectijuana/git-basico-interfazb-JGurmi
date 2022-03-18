#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;

/*
*Ejercicio 60:Capitulo 3
*
*Calcular el volumen de cualquier cilindro si se conocen el radio de la 
base y la altura del cilindro
*
*/

//@Author   JGurmi
//@Date     14 de marzo del 2022

int main()
{
    double r=0;
    double h=0;
    
    cout<<"Dime el valor del radio de tu cilindro: ";
    cin>>r;
    
    cout<<"Dime el valor de la altura de tu cilindro: ";
    cin>>h;
    
    double V= (M_PI*pow(r,2)*h);
    
    cout<<"El Volumen total del cilindro es: "<<V;

    return 0;
}
