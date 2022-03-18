
#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;


/*
*Ejercicio 3:Capitulo 4
*
*Introducir la medida en radianes de un angulo y calcular
la medida en grados
*
*/

//@Author   JGurmi
//@Date     17 de marzo del 2022

int main()
{
    float grados=0;/*Declaramos los grados como float*/
    float rad=0;/*Declaramos los radianes como float*/
    
    cout<<"Dame los valores de tus radianes: ";
    cin>>rad;
    
    float conversion= (rad*180)/M_PI;
    cout<<"Conversion de tus radianes a grados  son: "<<conversion;

    return 0;
}