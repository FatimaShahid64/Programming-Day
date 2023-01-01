#include<iostream>
#include<windows.h>
using namespace std;

void IsEqual(int x,int y){
if(x==y){
cout<<"True";
}
else{
cout<<"False";
}
}
main()
{
int x,y;
cout<<"Please Enter First Integer : ";
cin>>x;
cout<<"Please Enter Second Integer :  ";
cin>>y;
IsEqual(x,y);
}