/*
Date: 13/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Hacer un programa que realice el tema de la bisección
Last modification: 13/10/2022
*/
#include <iostream>
#include <cmath>
using namespace std;

float resolverEcuacion(float valor){
    return pow(valor, 2) + valor - 6;
}

int main(){
    int iterador=1;
    float a, b, c, error = 0.01, ya , yb, yc; 
    cout<<"Give me your (a) value: ";
    cin>>a;
    cout<<"Give me your (b) value: ";
    cin>>b;
    do{ 
        iterador++;
        c = (a+b)/2;
        ya= resolverEcuacion(a), yb = resolverEcuacion(b), yc = resolverEcuacion(c);
        if(ya*yc < 0){
            b=c;
        }
        else if((yc*yb) < 0){
            a=c;
        }
        for(int u; u < 160; u++){
            cout<<"-";
            cout<<endl;
        }
        cout<<c<<endl;
    }while(abs(yc) >= error);


    return 0;
}