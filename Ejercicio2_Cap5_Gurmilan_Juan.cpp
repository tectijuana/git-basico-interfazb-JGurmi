#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/

using namespace std;

/*
*Ejercicio 2:Capitulo 5
*Escribir un programa para imprimir una secuencia característica de 100 tiros 
es decir, sol, águila, sol, águila, etc.
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
    string result;
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
        for (int i=1;i<=100;i++)
        {

        if (moneda==0)
            {
             result="\nSol\n";
            }
        else{
             result="\nAguila\n";
        } 
        cout <<"Tiro: ["<< i <<"] Su resultado fue: " <<result<< endl;
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