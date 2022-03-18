
#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;



/*
*Ejercicio 2:Capitulo 4
*
*Introducir la medida en grados de un angulo y calcular
la medida en radianes
*
*/

//@Author   JGurmi
//@Date     17 de marzo del 2022

int main()
{
    float grados=0;/*Declaramos los grados como float*/
    float rad=0;/*Declaramos los radianes como float*/
    
    cout<<"Dame los valores de tus grados: ";
    cin>>grados;
    
    float conversion= (grados*M_PI)/180;
    cout<<"Conversion de tus grados a radianes son: "<<conversion;

    return 0;
}
