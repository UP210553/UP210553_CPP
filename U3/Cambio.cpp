/*
Date: 24/10/2022
Author: Ángel de Jesús Martinez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: 
Last modification: 26/10/2022
*/

#include <iostream>

using namespace std;

void obtenerCambio(int);
void imprimirCambio();

int quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;

int main(){
    int dinero;
    cout<<"================================================="<<endl;
    cout<<"Give me the amount of money: ";
    cin>>dinero;
    
    obtenerCambio (dinero);
    imprimirCambio ();

return 0;
}
void obtenerCambio (int monto){
    
    while(monto > 0){
        if(monto >= 500){
            quinientos++;
            monto-=500;
        }
        else if(monto >= 200 && monto < 500){
            doscientos++;
            monto-=200;
        }
        else if(monto >= 100 && monto < 200){
            cien++;
            monto-=100;
        }
        else if(monto >= 50 && monto < 100){
            cincuenta++;
            monto-=50;
        }
        else if(monto >= 20 && monto < 50){
            veinte++;
            monto-=20;
        }
        else if(monto >= 10 && monto < 20){
            diez++;
            monto-=10;
        }
        else if(monto >= 5 && monto < 10){
            cinco++;
            monto-=5;
        }
        else if(monto >= 2 && monto < 5){
            dos++;
            monto-=2;
        }
        else{
            uno++;
            monto-=1;
        } 
        }
}
void imprimirCambio(){
    cout<<"==========Breakdown========="<<endl;
    cout<<"$500 bills: \t"<<quinientos<<endl;
    cout<<"$200 bills: \t"<<doscientos<<endl;
    cout<<"$100 bills: \t"<<cien<<endl;
    cout<<"$50 bills: \t"<<cincuenta<<endl;
    cout<<"$20 bills: \t"<<veinte<<endl;
    cout<<"$10 coins: \t"<<diez<<endl;
    cout<<"$5 coins: \t"<<cinco<<endl;
    cout<<"$2 coins: \t"<<dos<<endl;
    cout<<"$1 coins: \t"<<uno<<endl;
    
}