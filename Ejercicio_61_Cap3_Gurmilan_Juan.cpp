/*Calcular el area superficial de un cilindro con la formula:
S= 2*PI*(r2+h)*/

#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;

int main()
{
    double r=0;
    double h=0;
    
    cout<<"Dime el valor del radio de tu cilindro: ";
    cin>>r;
    
    cout<<"Dime el valor de la altura de tu cilindro: ";
    cin>>h;

    double S= ((2*M_PI)*(r*(r+h)));
    
    cout<<"La area superficial es: "<<S;
    return 0;
}
