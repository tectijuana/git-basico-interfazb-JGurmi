#include <iostream>
#include <string>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/

using namespace std;

/*
*Ejercicio 2:Capitulo 3
*Dada una medida angular mayor que 0° pero menor que 180°,
clasificar el angulo como obtuso, recto o agudo.
*
*/

//@Author   JGurmi
//@Date     22 de marzo del 2022

int main()
{
    double ang;

    cout << "Inserte un angulo mayor a 0 grados y menor a 180 grados para saber su angulo: ";
    cin >> ang;

    if (ang>0 && ang<90)
        cout << "\nEl angulo es agudo\n";
        
    else if (ang == 90)
        cout << "\nEl angulo es recto\n";
        
    else if (ang > 90 && ang < 180)
        cout << "\nEl angulo es obtuso\n";
        
    else
        cout << "\nInserte un angulo mayor a 0 grados y menor a 180 grados para saber su angulo\n";
}