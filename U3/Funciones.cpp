/*
Date: 20/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: Creación y manejo de funciones
Last modification: 20/10/2022
*/

#include <iostream>

using namespace std;
int getmaxval(int num1, int num2);
int getminval(int num1, int num2);
int main(){
    int valor1, valor2, valorMax, valorMin;
    cout<<"Entry the first valor: ";
    cin>>valor1;
    cout<<"Entry the second valor: ";
    cin>>valor2;
    valorMax = getmaxval(valor1, valor2);
    valorMin = getminval(valor1, valor2);
    cout<<"The max value is: "<< valorMax << endl;
    cout<<"The min value is: "<< valorMin << endl;
return 0;
}
int getmaxval(int num1, int num2){
    return (num1 > num2)?num1:num2;
}
int getminval(int num1, int num2){
    return (num1 < num2)?num1:num2;
}