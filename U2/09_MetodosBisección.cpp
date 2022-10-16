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
    return pow(valor, 2) + 4 * valor + 8;
}

int main(){
    int iterador=1;
    float a, b, c=(a+b)/2;
    float ya= resolverEcuacion(a), yb = resolverEcuacion(b), yc = resolverEcuacion(c);

    cout<<"Give me your (a) value: ";
    cin>>a;
    cout<<"Give me your (b) value: ";
    cin>>b;
    if(ya)
    

    return 0;
}