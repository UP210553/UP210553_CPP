/*
Date: 22/09/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: Condicionales
Last modification: 22/09/2022
*/
#include <iostream>
using namespace std;

int main(){
    int numero , dato=1 ; 

    cout<<"Introduce un número entero: ";
    cin>>numero;
    if(numero==dato){
        cout<<"Número es igual a dato"<<endl;
    }
    else{
        cout<<"Número es diferente del dato"<<endl;
    }
    if(numero<=dato){
        cout<<"Número es menor o igual al dato"<<endl;
    }
    else{
        cout<<"Número es mayor al dato"<<endl;
    }
    if(numero>=dato){
        cout<<"Número es mayor o igual al dato"<<endl;
    }
    else{
        cout<<"Número es menor del dato"<<endl;
    }
    if(numero!=dato){
        cout<<"Número es diferente al dato"<<endl;
    }
    else{
        cout<<"Número es igual al dato"<<endl;
    }
    if(numero<dato){
        cout<<"Número es menor al dato"<<endl;
    }
    else{
        cout<<"Número es mayor o igual al dato"<<endl;
    }
    if(numero>dato){
        cout<<"Número es mayor al dato"<<endl;
    }
    else{
        cout<<"Número es menor o igual al dato"<<endl;
    }




    return 0;

}