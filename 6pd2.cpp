#include<iostream>
using namespace std;
main()
{
float sub1;
float sub2;
float sub3;
float sub4;
float sub5;
float total;
float percentage;
cout<<"Enter first subject marks ";
cin>>sub1;
cout<<"Enter second subject marks ";
cin>>sub2;
cout<<"Enter third subject marks "; 
cin>>sub3;
cout<<"Enter fourth subject marks "; 
cin>>sub4;
cout<<"Enter fifth subject marks "; 
cin>>sub5;
total=sub1+sub2+sub3+sub4+sub5;
percentage=(total/500)*100;
cout<<"This student's percentage is "<<percentage;
}