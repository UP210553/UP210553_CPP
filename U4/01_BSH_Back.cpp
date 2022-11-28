/*
Date: 
Authors: Enrique Abel Herrera Vargas
         Angel de Jesús Martínez Guevara
         Osvaldo Esparza Gutierrez
Emails: up210894@alumnos.upa.edu.mx
        up210553@alumnos.upa.edu.mx
        up210188@alumnos.upa.edu.mx
Description:  
-----Problem-----
*/

#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------ihoiuhuiy

void tablero();
void imprimirtablero();
bool preguntardondecolocarjugada();
int orientacioncolocarjugada();
bool comprobarsilaorientacionesvalida(int orientacion);
void colocarbarco(int orintacion);
void elegirbarcos();

int matriz[10][10];
int y, x;
int t = 2;
int numerodebarcos = 5;
int barcos2 = 1;
int barcos3 = 2;
int barcos4 = 1;
int barcos5 = 1;


int main(){
    int orientacion;
    bool comprobar;
    bool existejugada;
do {
tablero();
imprimirtablero();
elegirbarcos();
existejugada = preguntardondecolocarjugada();
if (existejugada == true){
orientacion = orientacioncolocarjugada();
comprobar = comprobarsilaorientacionesvalida (orientacion);
if (comprobar == true ){
      colocarbarco(orientacion);
}
}
system("cls");
}while (numerodebarcos > 0);
imprimirtablero();
return 0;
}

void tablero(){
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
    matriz[i][j];
    }
}
}
void imprimirtablero(){
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
    cout << matriz[i][j];
    }
    cout << endl;
}
}

void elegirbarcos(){
cout << "Menu de barcos" << endl;
cout << barcos2 <<  "  Barco de tamaño dos" << endl;
cout << barcos3 <<  "  Barco de tamaño tres" << endl;
cout << barcos4 <<  "  Barco de tamaño cuatro" << endl;
cout << barcos5 <<  "  Barco de tamaño cinco" << endl;

cout << endl << "Ingrese el tamaño de su barco: ";
cin >> t;
}

bool preguntardondecolocarjugada(){

cout << "Coloque jugada de inicio" << endl;
cout << "y: ";
cin >> y;
cout << "x: ";
cin >> x;
if (x < 10 && x >= 0 && y < 10 && y >= 0
    ){
    return true;
}
else {
    return false;
}
}

int orientacioncolocarjugada(){
    int orientacion;

cout << endl << "Orientacion" << endl;
cout << "1 = arriba" << endl;
cout << "2 = abajo" << endl;
cout << "3 = derecha" << endl;
cout << "4 = izquierda" << endl;

cout << "Ingrese la orinetacion: ";
cin >> orientacion;
return orientacion;
}

bool comprobarsilaorientacionesvalida(int orientacion){
    int comprobar;
if (orientacion == 1){
    comprobar = y - t;
    if (comprobar >=  -1){
        return true;
    }
    else {
        return false;
    }
}

else if (orientacion == 2){
    comprobar = y + t;
    if (comprobar <= 9){
        return true;
    }
    else {
        return false;
    }

}
else if (orientacion == 3){
    comprobar = x + t;
    if (comprobar <= 9){
        return true;
    }
    else {
        return false;
    }

}
else if (orientacion == 4){
    comprobar = x - t;
    if (comprobar >=  -1){
        return true;
    }
    else {
        return false;
    }
}
else {
    return false;
}

}

void colocarbarco(int orientacion){
    if (orientacion == 1){
while (t > 0){
        matriz[y][x] = 2;
        y--;
        t--;
        }
        numerodebarcos--;
    }

else if (orientacion == 2){
while (t > 0){
        matriz[y][x] = 2;
        y++;
        t--;
        }
        numerodebarcos--;
}
else if (orientacion == 3){
while (t > 0){
        matriz[y][x] = 2;
        x++;
        t--;
        }
        numerodebarcos--;
}
else if (orientacion == 4){
while (t > 0){
        matriz[y][x] = 2;
        x--;
        t--;
        }
        numerodebarcos--;
}

}
