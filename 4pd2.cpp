#include<iostream>
using namespace std;
main()
{
float initialv;
float acceleration;
float time;
float finalv;
cout<<"Enter initial velocity ";
cin>>initialv;
cout<<"Enter acceleration ";
cin>>acceleration;
cout<<"Enter time ";
cin>>time;
finalv=initialv+(acceleration*time);
cout<<"Final velocity is "<<finalv;
}