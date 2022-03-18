#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;

/*
*Ejercicio 103:Capitulo 3
*
*Determinar la media geometrica de dos numeros reales positivos
*
*/

//@Author   JGurmi
//@Date     14 de marzo del 2022

int main()
{
    double num1=0;
    double num2=0;
 
    cout<<"Dame un numero positivo: ";
    cin>>num1;
    
    cout<<"Dame otro numero positivo: ";
    cin>>num2;

    double m= num1*num2;
    double M= sqrt(m); //formula para realizar la media geometrica
    
    cout<<"La media geometrica es : "<<M;
  
    return 0;
}
