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
char tableroGato[6][11];
void generarTableroGato();
bool comprobarCasillaOcupada(int);
int seleccionarJugada();
int main(){
 generarTableroGato();
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
void generarTableroGato(){
    char tableroGato[6][11];
    for (int row = 0; row < 6; row++)  
    {
        for (int col = 0; col < 11; col++)
        {
            if (row % 2 == 0 && col!=3 && col!=7)
            {
                cout<<" ";
            }
            else if (row %2 == 0 && (col == 3 || col == 7))
            {
                cout<<"|";
            }
            else if (row % 2 != 0 && col!=3 && col!=7 )
            {
                cout<<"_";
            }
            else{
                cout<<"|";
            }
            
            
        }
        cout<<endl;
        
    }
} 