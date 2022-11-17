/*
Date: 28/10/2022
Author: Ángel Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Last modification: 28/10/2022
*/

#include <iostream>

using namespace std;
int jugada, turno = 0, x, y;
char areaJuego[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char tableroGato[6][11];
void generarTableroGato();
bool comprobarCasillaOcupada(int);
int seleccionarJugada();
void colocarJugada(bool, int);
bool verificarGanador(int);

int main()
{

    do
    {
        generarTableroGato();
        int j = seleccionarJugada();
        bool test = comprobarCasillaOcupada(j);
        colocarJugada(test, j);
        turno++;
        system("cls");
    } while (turno < 10);

    return 0;
}
int seleccionarJugada()
{
    do
    {
        cout << "Give me your play: ";
        cin >> jugada;
    } while (jugada < 1 || jugada > 9);
    return jugada;
}
bool comprobarCasillaOcupada(int jugada)
{
    int x, y;
    if (jugada == 1)
    {
        x = 0;
        y = 0;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (jugada == 2)
    {
        x = 0;
        y = 1;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (jugada == 3)
    {
        x = 0;
        y = 2;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (jugada == 4)
    {
        x = 1;
        y = 0;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (jugada == 5)
    {
        x = 1;
        y = 1;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (jugada == 6)
    {
        x = 1;
        y = 2;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (jugada == 7)
    {
        x = 2;
        y = 0;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (jugada == 8)
    {
        x = 2;
        y = 1;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        x = 2;
        y = 2;
        if (areaJuego[x][y] == 'X' || areaJuego[x][y] == 'O')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
void colocarJugada(bool j, int jugada)
{
    int x, y;
    if (jugada == 1)
    {
        x = 0;
        y = 0;
        if (j == 0)
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
    }
    else if (jugada == 2)
    {
        x = 0;
        y = 1;
        if (j == 0)
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
    }
    else if (jugada == 3)
    {
        x = 0;
        y = 2;
        if (j == 0)
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
    }
    else if (jugada == 4)
    {
        x = 1;
        y = 0;
        if (j == 0)
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
    }
    else if (jugada == 5)
    {
        x = 1;
        y = 1;
        if (j == 0)
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
    }
    else if (jugada == 6)
    {
        x = 1;
        y = 2;
        if (j == 0)
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
    }
    else if (jugada == 7)
    {
        x = 2;
        y = 0;
        if (j == 0)
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
    }
    else if (jugada == 8)
    {
        x = 2;
        y = 1;
        if (j == 0)
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
    }
    else
    {
        x = 2;
        y = 2;
        if (j == 0)
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
bool verificarGanador(int)
{
}