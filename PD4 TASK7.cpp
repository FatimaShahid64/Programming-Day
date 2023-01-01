#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
system("cls");
gotoxy(0,0);
cout<<"*****"<<endl;
gotoxy(0,1);
cout<<"*****"<<endl;
gotoxy(0,2);
cout<<"*    "<<endl;
gotoxy(0,3);
cout<<"*    "<<endl;
cout<<"     "<<endl;
gotoxy(0,4);
cout<<" ****"<<endl;
gotoxy(0,5);
cout<<"*    *"<<endl;
gotoxy(0,6);
cout<<"******"<<endl;
gotoxy(0,7);
cout<<"*    *"<<endl;
cout<<"      "<<endl;
gotoxy(0,8);
cout<<"******"<<endl;
gotoxy(0,9);
cout<<"   *  "<<endl;
gotoxy(0,10);
cout<<"   *  "<<endl;
gotoxy(0,11);
cout<<"   *  "<<endl;
cout<<"      "<<endl;
gotoxy(0,12);
cout<<" ***** "<<endl;
gotoxy(0,13);
cout<<"   *   "<<endl;
gotoxy(0,14);
cout<<"   *   "<<endl;
gotoxy(0,15);
cout<<" ***** "<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X= x;
coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

 