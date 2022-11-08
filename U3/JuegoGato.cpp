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
char areaJuego[3][3]={'1','2','3','4','5','6','7','8','9'};
char tableroGato[6][11];
void generarTableroGato();
bool comprobarCasillaOcupada(int);
int seleccionarJugada();
void colocarJugada(int);
int main(){
 generarTableroGato();
 seleccionarJugada();
 comprobarCasillaOcupada(jugada);
}
int seleccionarJugada(){
    do{
        cout<<"Give me your play: ";
        cin>>jugada;
    }while(jugada<=9&&jugada>0);
    return jugada;
}
bool comprobarCasillaOcupada(int jugada){
    int x, y;
    if (jugada == 1)
    {
        x=0;
        y=0;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
        
    }
    else if (jugada == 2)
    {
        x=0;
        y=1;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
    }
    else if (jugada == 3)
    {
        x=0;
        y=2;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
    }
    else if (jugada == 4)
    {
        x=1;
        y=0;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
    }
    else if (jugada == 5)
    {
        x=1;
        y=1;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
    }
    else if (jugada == 6)
    {
        x=1;
        y=2;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
    }
    else if (jugada == 7)
    {
        x=2;
        y=0;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
    }
    else if (jugada == 8)
    {
        x=2;
        y=1;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
    }
    else
    {
        x=2;
        y=2;
        if (areaJuego[x][y]=='X'||areaJuego[x][y]=='O')
        {
            return true;
        }
        else{
            return false;
        }
    }
}
void generarTableroGato(){
    char tableroGato[6][11];
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout<<areaJuego[x][y]<<" ";
        }
        cout<<endl;
    }
} 
void colocarJugada(int){
    
}