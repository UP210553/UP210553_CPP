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
int play, turn = 0, x, y;
char playArea[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char copiedMatrix[3][3] = {};

void generatePlayArea();
bool checkBusyBox(int);
int enterPlay();
void placePlay();
bool verifyWinner();
void cloneBoard();
bool checkVictoryPc();
bool avoidVictoryPlayerPc();
void generateRandomNumberPc();
int generateMenu();

int main()
{
    int gamemode;
    bool busybox = false, victory = false, victoryPC = false, avoidDefeat = false;
    do
    {
        gamemode = generateMenu();
        if (gamemode == 1)
        {
            generatePlayArea();
            do
            {
                cout<<endl;
                int j = enterPlay();
                system("cls");
                busybox = checkBusyBox(j);
                if (busybox == false)
                {
                    placePlay();
                    turn++;
                }
                else
                {
                    cout << "Busy box, choose another please " << endl;
                }
                generatePlayArea();
                victory = verifyWinner();

            } while ((turn < 9) && (victory == false));
            if ((turn = 9) && (victory == false))
            {
                system("cls");
                generatePlayArea();
                cout << endl;
                cout << "\033[0;36m"
                     << "-----DRAW-----"
                     << "\033[0m" << endl;
            }
        }
        else if (gamemode == 2)
        {
            generatePlayArea();
            do
            {
                if (turn % 2 == 0)
                {
                    cout<<endl;
                    int j = enterPlay();
                    system("cls");
                    busybox = checkBusyBox(j);
                    if (busybox == false)
                    {
                        placePlay();
                        turn++;
                    }
                    else
                    {
                        cout << "Busy box, choose another please " << endl;
                    }
                    generatePlayArea();
                    victory = verifyWinner();
                }
                else
                {
                    cloneBoard();
                    victoryPC = checkVictoryPc();
                    if (victoryPC == true)
                    {
                        break;
                    }

                    else
                    {
                        avoidDefeat = avoidVictoryPlayerPc();

                        if (avoidDefeat == false)
                        {
                            generateRandomNumberPc();
                        }

                        else
                        {
                            system("cls");
                        }
                    }
                    system("cls");
                    generatePlayArea();
                    turn++;
                }

            } while ((turn < 9) && (victory == false && victoryPC == false));
            system("cls");
            generatePlayArea();
            if ((turn == 9) && (victory == false && victoryPC == false))
            {

                cout << endl;
                cout << "\033[0;36m"
                     << "Tie"
                     << "\033[0m" << endl;
            }
            else if (victory == true)
            {
                cout << endl;
                cout << "\033[0;32m"
                     << "Win"
                     << "\033[0m" << endl;
            }
            else
            {
                cout << endl;
                cout << "\033[0;31m"
                     << "Game over"
                     << "\033[0m" << endl;
            }
        }
        else
        {
            cout << "\033[0;31m"
                 << "Invalid gamemode"
                 << "\033[0m" << endl;
        }
    } while (gamemode != 1 && gamemode != 2);

    system("PAUSE");

    return 0;
}
int generateMenu()
{

    int gameMode;

    cout << endl;
    cout << "\t\tMENU" << endl;
    cout << "Gamemode 1: "
         << "\tPlayer VS Player " << endl;
    cout << "Gamemode 2: "
         << "\tPlayer VS PC " << endl;
    cout << endl;
    cout << "Choose gamemode (number): ";
    cin >> gameMode;
    system("cls");
    return gameMode;
}
int enterPlay()
{

    do
    {
        cout << "Give me your play: ";
        cin >> play;
        if (play < 1 || play > 9)
        {
            cout << "\033[0;31m"
                 << "Please enter a valid play"
                 << "\033[0m" << endl;
        }

    } while (play < 1 || play > 9);
    return play;
}
bool checkBusyBox(int play)
{
    if (play == 1)
    {
        x = 0;
        y = 0;
    }
    else if (play == 2)
    {
        x = 0;
        y = 1;
    }
    else if (play == 3)
    {
        x = 0;
        y = 2;
    }
    else if (play == 4)
    {
        x = 1;
        y = 0;
    }
    else if (play == 5)
    {
        x = 1;
        y = 1;
    }
    else if (play == 6)
    {
        x = 1;
        y = 2;
    }
    else if (play == 7)
    {
        x = 2;
        y = 0;
    }
    else if (play == 8)
    {
        x = 2;
        y = 1;
    }
    else
    {
        x = 2;
        y = 2;
    }
    if (playArea[x][y] == 'X' || playArea[x][y] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void placePlay()
{
    if (turn % 2 == 0)
    {
        playArea[x][y] = 'X';
    }
    else
    {
        playArea[x][y] = 'O';
    }
}
void generatePlayArea()
{
    int x = 0, y = 0;
    cout << "\033[0;35m"
         << "\tTIC TAC TOE" 
         << "\033[0m"
         << endl;
    cout << endl;
    cout << "\033[0;36m"
         << "Player 1 (X)\t"
         << "\033[0m";
    cout << "\033[0;32m"
         << "Player 2 (O)"
         << "\033[0m" << endl;
    cout << endl;
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
                if (playArea[x][y] == 'X')
                {
                    cout << "\033[0;36m" << playArea[x][y] << "\033[0m";
                }
                else if (playArea[x][y] == 'O')
                {
                    cout << "\033[0;32m" << playArea[x][y] << "\033[0m";
                }
                else
                {
                    cout << playArea[x][y];
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
bool verifyWinner()
{
    if ((playArea[0][0] == playArea[0][1] && playArea[0][0] == playArea[0][2]) ||
        (playArea[1][0] == playArea[1][1] && playArea[1][0] == playArea[1][2]) ||
        (playArea[2][0] == playArea[2][1] && playArea[2][0] == playArea[2][2]) ||
        (playArea[0][0] == playArea[1][0] && playArea[0][0] == playArea[2][0]) ||
        (playArea[0][1] == playArea[1][1] && playArea[0][1] == playArea[2][1]) ||
        (playArea[0][2] == playArea[1][2] && playArea[0][2] == playArea[2][2]) ||
        (playArea[0][0] == playArea[1][1] && playArea[0][0] == playArea[2][2]) ||
        (playArea[0][2] == playArea[1][1] && playArea[0][2] == playArea[2][0]))
    {
        if (playArea[x][y] == 'X')
        {
            cout << "\033[0;36m"
                 << "Victory player 1"
                 << "\033[0m";
            return true;
        }
        else
        {
            cout << "\033[0;32m"
                 << "Victory player 2"
                 << "\033[0m";
            return true;
        }
    }
    else
    {
        return false;
    }
}
void cloneBoard()
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            copiedMatrix[row][col] = playArea[row][col];
        }
    }
}
bool checkVictoryPc()
{

    for (int playNumber = 1; playNumber <= 9; playNumber++)
    {

        bool busyPlay, victory;

        busyPlay = checkBusyBox(playNumber);

        if (busyPlay == false)
        {
            playArea[x][y] = 'O';
            victory = verifyWinner();
            if (victory == true)
            {
                return true;
                break;
            }
            else
            {
                playArea[x][y] = copiedMatrix[x][y];
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

        busyPlay = checkBusyBox(playNumber);

        if (busyPlay == false)
        {
            playArea[x][y] = 'X';
            victory = verifyWinner();
            if (victory == true)
            {
                playArea[x][y] = 'O';
                return true;
                break;
            }
            else
            {
                playArea[x][y] = copiedMatrix[x][y];
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

        busyPlay = checkBusyBox(random);

        if (busyPlay == false)
        {
            playArea[x][y] = 'O';
        }
        else
        {
            busyPlay = true;
        }

    } while (busyPlay == true);
}