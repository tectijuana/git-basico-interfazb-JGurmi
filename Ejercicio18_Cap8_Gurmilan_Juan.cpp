
#include <iostream>
#include <cmath> 
using namespace std;

/*
*Ejercicio 18:Capitulo 8
*
*La distancia de frenado en Celsius(C) de un carro 
experimental se calcula como 1.8 veces el cuadro de su 
velocidad S^2: es decir, C=1.8 s^2. Calcular e imprimir la
distancia de frenado para velocidades de 40km/h a 60 km/h
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
 
 
 for(int n=40;n<=60;n++)
 {
   float C= (1.8)*cuadrado(n);
   cout<<"\nDistancia frenado: "<<C;
   cout<<" C";
 }
    

    return 0;
}
