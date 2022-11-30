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
using namespace std;

void CrearTablero();
void gotoxy(int x,int y);

int main()
{
CrearTablero();
gotoxy(50,20);
cout<<"\033[0;34"<<"HOLIIIIIIIIII"<<"\033[o"<<endl;

        return 0;
}

void CrearTablero()
{       
        
        for (int row = 0; row < 23; row++)
        {
                for (int col = 0; col < 23; col++)
                {
                        if (row % 2 ==0)
                        {
                                if (col % 2 == 0)
                                {

                                        cout << "+";
                                }

                                else
                                {
                                        cout << "---";
                                }
                        }
                        else{
                                  if (col % 2 == 0)
                                {

                                        cout << "|";
                                }

                                else if(row==1 && col==3)
                                {
                                        cout<<" 1 ";
                                }
                                 else if(row==1 && col==5)
                                {
                                        cout<<" 2 ";
                                }
                                 else if(row==1 && col==7)
                                {
                                        cout<<" 3 ";
                                }
                                 else if(row==1 && col==9)
                                {
                                        cout<<" 4 ";
                                }
                                 else if(row==1 && col==11)
                                {
                                        cout<<" 5 ";
                                }
                                 else if(row==1 && col==13)
                                {
                                        cout<<" 6 ";
                                }
                                 else if(row==1 && col==15)
                                {
                                        cout<<" 7 ";
                                }
                                 else if(row==1 && col==17)
                                {
                                        cout<<" 8 ";
                                }
                                 else if(row==1 && col==19)
                                {
                                        cout<<" 9 ";
                                }
                                 else if(row==1 && col==21)
                                {
                                        cout<<" 10";
                                }
                                  else if(row==3 && col==1)
                                {
                                        cout<<" "<<char(65)<<" ";
                                }
                                  else if(row==5 && col==1)
                                {
                                        cout<<" B ";
                                }
                                  else if(row==7 && col==1)
                                {
                                        cout<<" C ";
                                }
                                  else if(row==9 && col==1)
                                {
                                        cout<<" D ";
                                }
                                  else if(row==11 && col==1)
                                {
                                        cout<<" E ";
                                }
                                  else if(row==13 && col==1)
                                {
                                        cout<<" F ";
                                }
                                  else if(row==15 && col==1)
                                {
                                        cout<<" G ";
                                }
                                  else if(row==17 && col==1)
                                {
                                        cout<<" H ";
                                }
                                  else if(row==19 && col==1)
                                {
                                        cout<<" I ";
                                }
                                  else if(row==21 && col==1)
                                {
                                        cout<<" J ";
                                }

                                else{
                                        cout<<"   ";
                                }

                        }
                }

                cout<<endl;
        }
}

void gotoxy(int x ,int y){

        cout<<"\033["<<y<<","<<x<<"f";
}