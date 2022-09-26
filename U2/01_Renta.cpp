/*
Date: 23/09/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes:

Renta	Tipo impositivo
Menos de $10,000	5%
Entre $10,000 y $20,000	15%
Entre $20,000 y $35,000	20%
Entre $35,000 y $60,000	30%
Más de $60,000	45%
Escribir un programa que pregunte al usuario su renta anual y muestre por 
pantalla el tipo impositivo que le corresponde.

Last modification: 23/09/2022
*/
// INCLUIMOS LA LIBRERIA IOSTREAM PARA USO DE ENTRADA Y SALIDA
#include <iostream>
// MARCAMOS EL USO DE STD PARA NO TENER QUE PONER STD::COUT EN CADA LINEA
using namespace std;
// ABRIMOS NUESTRA FUNCION MAIN 
int main(){
    // DECLARACION DE VARIABLES
    int renta, porcentaje;
    float impuestoAPAgar;
    // PEDIMOS LA INFORMACION AL USUARIO
    cout<<"Introduce el costo de tu renta: "<<endl;
    // GUARDAMOS LA INFO INTRODUCIDA POR EL USUARIO
    cin>>renta;

    // CONDICIONES PARA SABER CON QUE HACER EL CALCULO 
    if (renta<10000){
        porcentaje=5;
    }
    if (renta>=10000 && renta<20000){   
        porcentaje=15;
    }
    if (renta>=20000 && renta<35000){
        porcentaje=20;
    }
    if (renta>=35000 && renta<60000){
        porcentaje=30;
    }
    if (renta>=60000){
        porcentaje=45 ;
    }
    impuestoAPAgar=renta*porcentaje/100;
    //SALIDAS PARA EL USUARIO
    cout<<"El porcentaje impuesto es de: "<<porcentaje<<"%"<<endl;
    cout<<"El impuesto a pagar es de: $"<<impuestoAPAgar<<endl;

    //RETORNO DE LA FUNCION 
    return 0;

}
