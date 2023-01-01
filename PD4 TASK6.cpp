#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
system("cls");
gotoxy(75,21);
cout<<"******  ****  ******* ***** "<<endl;
gotoxy(75,22);
cout<<"*      *    *    *      *   "<<endl;
gotoxy(75,23);
cout<<"****** ******    *      *   "<<endl;
gotoxy(75,24);
cout<<"*      *    *    *      *   "<<endl;
gotoxy(75,25);
cout<<"*      *    *    *    ***** ";
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X= x;
coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

