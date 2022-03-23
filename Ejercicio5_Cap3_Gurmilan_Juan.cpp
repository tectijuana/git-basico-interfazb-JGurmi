#include <iostream>
#include <string>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/

using namespace std;

/*
*Ejercicio 5:Capitulo 3
*Introducir las medidas de dos ángulos interiores opuestos en el triangulo.
Determinar la medida de los ángulos externos.
*
*/

//@Author   JGurmi
//@Date     22 de marzo del 2022

int main()
{
    double A, B, C, a, b, c;

    cout << "Insertar valor de los angulos internos para saber sus angulos externos..\n";

    cout << "\nValor del Angulo A: ";
    cin >> A;
    cout << "Valor del Angulo B: ";
    cin >> B;

    C = (180-A-B);

    a = 180 - A;
    b = 180 - B;
    c = 180 - C;

    cout << "\n|Angulos externos de los angulos internos que se plasmaron|\n";
    cout << "\nAngulo externo del angulo a: " << a;
    cout << "\nAngulo externo del angulo b: " << b;
    cout << "\nAngulo externo del angulo c: " << c;
}