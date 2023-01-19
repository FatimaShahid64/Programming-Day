#include<iostream>
using namespace std;
main()
{
int number;
int sum;
int rem1;
int rem2;
int rem3;
int rem4;
int div;
int div1;
int div2;
int div3;
cout<<"Enter a four digit number ";
cin>>number;
rem1=number%10;
div=number/10;
rem2=div%10;
div1=div/10;
rem3=div1%10;
div2=div1/10;
rem4=div2%10;
sum=rem1+rem2+rem3+rem4;
cout<<"Sum: "<<sum;
}
