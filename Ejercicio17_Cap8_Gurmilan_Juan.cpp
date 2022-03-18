
#include <iostream>
#include <cmath> 
using namespace std;

/*
*Ejercicio 17:Capitulo 8
*
*El numero de chirridos que hace un grillo por minuto
es una funcion de la temperatura. En consecuencia, es posible
decir cuanto calor hace usando un grillo como termometro.
Una formula es t = (n+40)/4. Aqui t representa la temperatura
en grados Fahrenheit y n el numero de chirridos que emite
el grillo por minuto. Determinar e imprimir valores de t 
para n igual a 40, 50, 60, 70,...140, 150
*
*/

//@Author   JGurmi
//@Date     17 de marzo del 2022


int main()
{
 
 
 for(int n=40;n<=150;n++)
 {
   if(n%10==0)
   {
        double t=(n+40)/4;
    cout<<"\n"<<t;
   }
  
 }
    

    return 0;
}
