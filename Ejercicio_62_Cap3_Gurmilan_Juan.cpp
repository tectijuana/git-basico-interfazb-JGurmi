#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;

/*
*Ejercicio 62:Capitulo 3
*
*Calcular el area de la envoltura de papel de una lata cilindrica de maiz,
que tiene 24 cm de altura y 12 cm de diametro. La formula para calcular el
area exterior de un cilindro puede escribirse como:
Area = altura*diametro*PI
*
*/

//@Author   JGurmi
//@Date     14 de marzo del 2022


int main()
{
    
    float Altura= 24;
    float diametro= 12;
  
    float Area= (Altura*diametro*M_PI);
    
    cout<<"El area de la envoltura de papel es de: "<<Area;
    
}
