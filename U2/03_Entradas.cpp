/*
Date: 28/09/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Escribir un programa para una empresa que tiene salas de juegos para todas las edades y quiere calcular de forma automática
el precio que debe cobrar a sus clientes por entrar. El programa debe preguntar al usuario la edad del cliente y mostrar el
precio de la entrada. Si el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar 
$5 y si es mayor de 18 años, $10.
Last modification: 28/09/2022
*/
//Library and use of std declaration
#include <iostream>
using namespace std;

// Main function and variables declaration
int main(){
    int costoEntrada, edad; 

    // Data entry
    cout<<"How is the age of the client? "<<endl;
    cin>>edad;
    // Code Process
    if (edad<0){
        cout<<"Check the data entered please"<<endl;

    }
    else{
        if (edad<4){
            costoEntrada=0;
        }
        if (edad>=4 && edad<=18){
            costoEntrada=5;
        }
        if (edad>18){
            costoEntrada=10;
        }
    // Data output
    cout<<"The coste of the ticket is= $"<<costoEntrada<<endl;
    }


    return 0;
}