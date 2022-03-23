#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/

using namespace std;

/*
*Ejercicio 1:Capitulo 5
*Simular la caida de una moneda.
*
*/

//@Author   JGurmi
//@Date     22 de marzo del 2022

int Moneda(void)
{
    
    int moneda;
    moneda= rand()%2; //codigo para la simulacion de las 2 posibilidades donde cae la moneda
    return moneda;
}

int main()
{
    int Op,moneda;
    do{
        cout<<"¿Desea lanzar la moneda?: ";
        cout<<"\n1-SI"<<endl;
        cout<<"2-NO"<<endl;
        cout<<"Opción: ";
        cin>>Op;
        
        switch(Op)
        {
        case 1:
            srand(time(0));
            moneda=Moneda();
            
        if (moneda==0)
            {
             cout<<"\nSol\n";
             cout<<"\n";
            }
        else{
             cout<<"\nAguila\n";
             cout<<"\n";
        } 
        break;
        
        case 2:
             cout<<"\nGracias por jugar\n";
             break;
             
        default:
             cout<<"\nIngrese una opción válida\n";
            break;
            
        }

       
    }while(Op!=2);
    
    cin.get();
}