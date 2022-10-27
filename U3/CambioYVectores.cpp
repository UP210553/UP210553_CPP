/*
Date: 27/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: 
Last modification: 27/10/2022
*/

#include <iostream>

using namespace std;
void obtenerCambio(int);
void imprimirCambio();
int denominaciones[9]={500,200,100,50,20,10,5,2,1};
int cantidadDinero[9]={0};

int main(){
    int dinero;
    cout<<"==============================="<<endl;
    cout<<"Give me the amount of money: ";
    cin>>dinero;
    
    obtenerCambio (dinero);
    imprimirCambio ();

return 0;
return 0;
}
void obtenerCambio (int monto){
    int residuo = 0;
    for (int denominacion = 0; denominacion < 9; denominacion++)
    {
        residuo=(denominacion == 0)?monto:residuo;
        cantidadDinero[denominacion] = residuo/denominaciones[denominacion];
        residuo = residuo % denominaciones[denominacion];
    }
    
}
void imprimirCambio(){
    cout<<"===========Breakdown=========="<<endl;
    for (int i = 0; i < 9; i++)
    {
        string tipo = (i<5)?"Bills: ":"Coins: ";
        cout<<"$"<<denominaciones[i]<<" \t"<<tipo<<" \t"<<cantidadDinero[i]<<endl;
    }
    
}