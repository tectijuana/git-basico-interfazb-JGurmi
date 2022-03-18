
#include <iostream>
#include <cmath> 
using namespace std;

/*
*Ejercicio 13:Capitulo 8
*
*Las fuerzas de arrastre y elevacion de un cohete pueden
darse aproximadamente por las ecuaciones: Arrastre = DdAV^2
y elevacion= LdAV^2, donde D y L, son los coeficientes de
arrastre y elevacion, respectivamente determinados
en forma experimental; d es la densidad del aire: A es el
area de la seccion transversal del cohete y V su velocidad.
Introducir diferentes valores de D,L,d,A y V e imprimir de
las fuerzas de arrastre y elevacion.
*
*/

//@Author   JGurmi
//@Date     17 de marzo del 2022


int main()
{
    float A=0;
    float V=0;
    float d=0;
    float D=0;
    float L=0;
   
    cout<<"Dame el valor de  del area de la seccion transversal del cohete: ";
    cin>>A;
    
     cout<<"Dame el valor de la velocidad: ";
    cin>>V;
    
      cout<<"Dame el valor de la densidad del aire: ";
    cin>>d;
    
    cout<<"Dame el valor del coeficiente de arrastre: ";
    cin>>D;
    
    cout<<"Dame el valor del coeficiente de elevacion: ";
    cin>>L;
    
    float arrastre= ((D*d*A)*(pow(V,2)));
    float elevacion=((L*d*A)*(pow(V,2)));
    
     cout<<"\nEl valor de la fuerza de arrastre es: "<<arrastre;
     cout<<" m/s\n";
      cout<<"El valor de la fuerza de elevacion es: "<<elevacion;
     cout<<" m/s";
      
    

    return 0;
}
