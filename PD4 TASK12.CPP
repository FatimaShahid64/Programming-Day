#include<iostream>
using namespace std;
void Speed(int speed)
{
if(speed>=100)
{
cout<<"Halt.....YOU WILL BE CHALLANED!!!";
}
else
{
cout<<"PERFECT! YOU ARE GOING GOOD.";
}
}
main()
{
int speed;
cout<<"Enter Speed in km/h:  ";
cin>>speed;
Speed(speed);
}