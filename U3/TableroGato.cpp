/*
Date: 28/10/2022
Author: Ángel Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: 
Last modification: 28/10/2022
*/

#include <iostream>

using namespace std;
int jugada;
char areaJuego[3][3]={('1','2','3'),('4','5','6'),('7','8','9')};
void generarTableroGato();
bool comprobarCasillaOcupada(int);
int seleccionarJugada();
int main(){

}

int seleccionarJugada(){
    do{
        cout<<"Give me your play: ";
        cin>>jugada;
    }while(jugada<=9&&jugada>0);
    return jugada;
}
bool comprobarCasillaOcupada(int jugada){
    if(jugada=1){

    }
}
