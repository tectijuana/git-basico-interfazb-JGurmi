
#include <iostream>
#include <cmath> 
using namespace std;

/*
*Ejercicio 19:Capitulo 8
*
*La atraccion gravitacional entre dos cuerpos cualesquiera
en el universo esta dada por la formular F=(G*M*N)/R^2, donde
M y N son las masas de los cuerpos en kg; R es la distancia
entre ellos en m y G es la constante de gravitacion. Establecer
valores para M, N, R y G y calcular e imprimir F
*
*/

//@Author   JGurmi
//@Date     17 de marzo del 2022

double cuadrado(double X)
{
    X = (X * X);
    return X;
}

int main()
{
 
 double M=0;
 double N=0;
 double R=0;
 double G=6.67*pow(10,-11);//constante de la gravitacion.
 
 
cout<<"Dame el valor de la masa M: ";
cin>>M;
cout<<"kg";

cout<<"\nDame el valor de la masa N: ";
cin>>N;
cout<<"kg";

cout<<"\nDame el valor de la distancia R: ";
cin>>R;
cout<<"m";


double F= (G*M*N)/cuadrado(R);

cout<<"\nLa atraccion gravitacional entre los dos cuerpos es: "<<F;
cout<<" m/s";
cin>>R;

 

    return 0;
}
