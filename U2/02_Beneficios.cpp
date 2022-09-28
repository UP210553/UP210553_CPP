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
//We include the library of iostream to use the inputs and outputs 
#include <iostream>
//Declaramos uso de nombre std para evitar el std:: en cada linea 
using namespace std;

//Iniciamos función principal
int main(){
    //Declaramos variables
    float  beneficios;
    double calificacion;
    //Inicio del programa pidiendo datos al usuario
    cout<<"Enter your rating: "<<endl;
    cin>>calificacion;
    //Función de comparación
    if (calificacion==0.0||calificacion==0.4||calificacion>=0.6&&calificacion<=1){
        beneficios= 2400*calificacion;
        cout<<"Your rate is: "<<calificacion<<endl;
        cout<<"Your benefit will be: $"<<beneficios<<endl;
    }
    else {
        cout<<"Error: Try again, please your rating correctly.  "<<endl;
    }
    
    //Retorno de la función a cero    
    return 0;
}