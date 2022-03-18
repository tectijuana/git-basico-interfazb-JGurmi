#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;

/*
*Ejercicio 92:Capitulo 3
*
*El radio de la tierra es de alrededor de 7,400 km. Calcular
la circunferencia de la tierra
*
*/

//@Author   JGurmi
//@Date     14 de marzo del 2022

int main()
{
    double r=7400;
    
    double C= 2*M_PI*r; //formula para calcular la circuferencia

    
    cout<<"La circunferencia de la Tierra es: "<<C;
    cout<<" km aproximadamente..";
    return 0;
}
