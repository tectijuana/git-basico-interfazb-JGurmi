#include <iostream>
#include <string>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/

using namespace std;

/*
*Ejercicio 1:Capitulo 3
*Dados los tres lados A,B,C, de un triangulo, encontrar los tres 
ángulos a, b y c. Suponer que todos los ángulos son agudos.
*
*/

//@Author   JGurmi
//@Date     22 de marzo del 2022


double ConversionRad_Grad(double radianes)
{
    return radianes * 180 / M_PI;
}

int main()
{
    double A, B, C, a, b, c;

    cout << "Inserte los valores de los lados que se indiquen por favor\n";
    cout << "\nValor del lado A = ";
    cin >> A;
    cout << "Valor del lado B = ";
    cin >> B;
    cout << "Valor del lado C = ";
    cin >> C;

    a = ConversionRad_Grad(1 / (cos((pow(B,2) + pow(C,2) - pow(A,2)) / (2 * B * C))));
    b = ConversionRad_Grad(1 / (cos((pow(A,2) + pow(C,2) - pow(B,2)) / (2 * A * C))));
    c = ConversionRad_Grad(1 / (cos((pow(A,2) + pow(B,2)- pow(C,2)) / (2 * A * C))));

    cout << "\n --- Angulos de los lados---\n";
    cout << "\nAngulo del lado a = " << a;
    cout << "\nAngulo del lado b = " << b;
    cout << "\nAngulo del lado c = " << c << "\n";
}