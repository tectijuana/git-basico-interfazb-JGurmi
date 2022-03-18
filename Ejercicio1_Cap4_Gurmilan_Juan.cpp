#include <iostream>
#include <cmath> /*Libreria para realizar las operaciones matematicas*/
using namespace std;

/*
*Ejercicio 1:Capitulo 4
*
*Pasar grados a radianes utilizando multiplos de 10,
desde 0 hasta 360 grados
*
*/

//@Author   JGurmi
//@Date     14 de marzo del 2022

int main()
{
 
    int grados=0;/*Declaramos los grados como float*/
	for (grados=0; grados<=360; grados++) /*hacemos un for donde ponemos el rango
	de 0 grados hasta los 360 grados*/
	{
		if (grados % 10 == 0)/*se hace una condicion que nomas se impriman los
		multiplos de 10 en el rango del for*/
		
			cout << (grados*M_PI)/180 <<endl; /*formula para convertir grados
			a radianes*/
			
	}
    return 0;
}
