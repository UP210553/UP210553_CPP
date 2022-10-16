/*
Date: 26/09/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
En una determinada empresa, sus empleados son evaluados al final de cada año. 
Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando, 
traduciéndose en mejores beneficios. Los puntos que pueden conseguir 
los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios 
entre las cifras mencionadas. A continuación se muestra una tabla con los 
niveles correspondientes a cada puntuación. La cantidad de dinero conseguida
en cada nivel es de $2,400 multiplicada por la puntuación del nivel.

Nivel	Puntuación
Inaceptable	0.0
Aceptable	0.4
Meritorio	0.6 o más
Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, 
así como la cantidad de dinero que recibirá el usuario.
*¡Muchas gracias por preferirnos! Esperamos poder servirte nuevamente.
Last modification: 26/09/2022
*/
//Library and use of std declaration
#include <iostream>
using namespace std;

//Main function and variables declaration
int main(){
    float  beneficios;
    double calificacion;
    // Data entry
    cout<<"Enter your rating: "<<endl;
    cin>>calificacion;
    // Code Process
    if (calificacion==0.0||calificacion==0.4||calificacion>=0.6&&calificacion<=1){
        beneficios= 2400*calificacion;
        // Data output
        cout<<"Your rate is: "<<calificacion<<endl;
        cout<<"Your benefit will be: $"<<beneficios<<endl;
    }
    else {
        cout<<"Error: Try again, please your rating correctly.  "<<endl;
    }
    
    //Function return to 0 
    return 0;
}