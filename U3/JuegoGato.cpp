/*
Date: 28/10/2022
Author: Ángel Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: TIC TAC TOE Game
Last modification: 20/11/2022
*/

#include <iostream>
#include <stdalign.h>
#include <time.h>

using namespace std;
int jugada, turno = 0, x, y;
char areaJuego[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char matrizCopiada[3][3] = {};
void generarTableroGato();
bool comprobarCasillaOcupada(int);
int seleccionarJugada();
void colocarJugada();
bool verificarGanador();
void clonarTablero();
bool checkVictoryPc();
bool avoidVictoryPlayerPc();
void generateRandomNumberPc();
int generarMenu();

int main()
{
    int gamemode;
    bool victoria=false;
    gamemode = generarMenu();
    if (gamemode == 1)
    {
        do
        {
            generarTableroGato();
            int j = seleccionarJugada();
            bool test = comprobarCasillaOcupada(j);
            colocarJugada();
            victoria = verificarGanador(); 
            turno++;
            system("cls");
            if (turno > 9)
            {
                cout << "-----DRAW-----";
            }
            
        } while (turno <= 9 && victoria == false);
    }
    else if (gamemode == 2)
    {
        
    }
    else
    {
         cout << "\033[0;31m" << "Invalid gamemode" << "\033[0m" << endl;
    }
    
    
    
   
    return 0;
}
int generarMenu()
{
    
    int gameMode;

    cout << endl;
    cout << "Menu" << endl;
    cout << "Gamemode 1:   Player 1 vs Player 2" << endl;
    cout << "Gamemode 2:   Player 1 vs CPU" << endl;
    cout << endl;
    cout << "Choose gamemode: ";
    cin >> gameMode;
    system("cls");

    if (gameMode == 1)
    {
        return 1;
    }
    else if (gameMode == 2)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int seleccionarJugada()
{
    
    do
    {
        cout << "Give me your play: ";
        cin >> jugada;
        if (jugada < 1 || jugada > 9)
        {
            cout << "\033[0;31m" << "Please enter a valid play" << "\033[0m"<< endl;
        }
        
    } while (jugada < 1 || jugada > 9);
    return jugada;
}
bool comprobarCasillaOcupada(int jugada)
{
    if (jugada == 1)
    {
        x = 0;
        y = 0;
    }
    else if (jugada == 2)
    {
        x = 0;
        y = 1;
    }
    else if (jugada == 3)
    {
        x = 0;
        y = 2;
    }
    else if (jugada == 4)
    {
        x = 1;
        y = 0;
    }
    else if (jugada == 5)
    {
        x = 1;
        y = 1;
    }
    else if (jugada == 6)
    {
        x = 1;
        y = 2;
    }
    else if (jugada == 7)
    {
        x = 2;
        y = 0;
    }
    else if (jugada == 8)
    {
        x = 2;
        y = 1;
    }
    else
    {
        x = 2;
        y = 2;
    }
    if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            cout << "Casilla ocupada elije otra";
            return true;
        }
        else
        {
            return false;
        }
}
void colocarJugada()
{
    if (turno % 2 == 0)
    {
        areaJuego[x][y] = 'X';
    }
    else
    {
        areaJuego[x][y] = 'O';
    }
}
void generarTableroGato()
{
    int x = 0, y = 0;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (row == 1 || row == 3)
            {
                cout << "-";
            }
            else if (col == 1 || col == 4 || col == 7)
            {
                if (areaJuego[x][y] == 'X')
                {
                    cout << "\033[0;34m" << areaJuego[x][y] << "\033[0m";
                }
                else if (areaJuego[x][y] == 'O')
                {
                    cout << "\033[0;31m" << areaJuego[x][y] << "\033[0m";
                }
                else
                {
                    cout << areaJuego[x][y];
                }

                y++;
            }
            else
            {
                cout << " ";
            }
            if (col == 2 || col == 5)
            {
                cout << "|";
            }
        }
        cout << "\n";
        if (row % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
}
bool verificarGanador()
{
    if ((areaJuego[0][0] == areaJuego[0][1] && areaJuego[0][0] == areaJuego[0][2]) ||
        (areaJuego[1][0] == areaJuego[1][1] && areaJuego[1][0] == areaJuego[1][2]) ||
        (areaJuego[2][0] == areaJuego[2][1] && areaJuego[2][0] == areaJuego[2][2]) ||
        (areaJuego[0][0] == areaJuego[1][0] && areaJuego[0][0] == areaJuego[2][0]) ||
        (areaJuego[0][1] == areaJuego[1][1] && areaJuego[0][1] == areaJuego[2][1]) ||
        (areaJuego[0][2] == areaJuego[1][2] && areaJuego[0][2] == areaJuego[2][2]) ||
        (areaJuego[0][0] == areaJuego[1][1] && areaJuego[0][0] == areaJuego[2][2]) ||
        (areaJuego[0][2] == areaJuego[1][1] && areaJuego[0][2] == areaJuego[2][0]))
    {
        if (areaJuego[x][y] == 'X')
        {
            cout << "\033[0;32m"
                 << "Victoria player 1"
                 << "\033[0m";
            return true;
        }
        else
        {
            cout << "\033[0;33m"
                 << "Victoria player 2"
                 << "\033[0m";
            return true;
        }
    }
    else
    {
        return false;
    }


}
void clonarTablero()
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            matrizCopiada[row][col] = areaJuego[row][col];
        }
    }
}
bool checkVictoryPc()
{

    for (int playNumber = 1; playNumber <= 9; playNumber++)
    {

        bool busyPlay, victory;

        busyPlay = comprobarCasillaOcupada(playNumber);

        if (busyPlay == false)
        {
            areaJuego[x][y] = 'O';
            victory = verificarGanador();
            if (victory == true)
            {
                return true;
                break;
            }
            else
            {
                areaJuego[x][y] = matrizCopiada[x][y];
            }
        }
    }
    return false;
}
bool avoidVictoryPlayerPc()
{

    bool busyPlay, victory;

    for (int playNumber = 1; playNumber <= 9; playNumber++)
    {

        busyPlay = comprobarCasillaOcupada(playNumber);

        if (busyPlay == false)
        {
            areaJuego[x][y] = 'X';
            victory = verificarGanador();
            if (victory == true)
            {
                areaJuego[x][y] = 'O';
                return true;
                break;
            }
            else
            {
                areaJuego[x][y] = matrizCopiada[x][y];
            }
        }
    }
    return false;
}
void generateRandomNumberPc()
{

    bool busyPlay = true;
    int random;

    do
    {
        srand(time(NULL));
        random = 1 + rand() % 9 - 1 + 1;

        busyPlay = comprobarCasillaOcupada(random);

        if (busyPlay == false)
        {
            areaJuego[x][y] = 'O';
        }
        else
        {
            busyPlay = true;
        }

    } while (busyPlay == true);
}