
#include <iostream>
#include <cmath> 
using namespace std;

/*
*Ejercicio 15:Capitulo 8
*
*Dada la altura, la distancia, la distancia imagen y la
distancia focal de un objeto, encontrar la distancia de la
imagen
*
*/

//@Author   JGurmi
//@Date     17 de marzo del 2022

int main()
{
    float f=0;//distancia focal
    float Do=0;//distancia del objeto.
   
    cout<<"Dame el valor de la distancia focal: ";
    cin>>f;
    
     cout<<"Dame el valor de la distancia del objeto: ";
    cin>>Do;
    
   float di= (Do*f)/(Do+f);//formula para sacar la distancia de la imagen.
    
     cout<<"El valor de la distancia de la imagen es: "<<di;
    

    return 0;
}
