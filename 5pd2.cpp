#include<iostream>
using namespace std;
main()
{
string name;
float aprice;
float cprice;
float asold;
float csold;
float percentage;
float percent;
float totalc;
float totala;
float totalamount;
cout<<"Enter movie name ";
cin>>name;
cout<<"Enter child ticket price ";
cin>>cprice;
cout<<"Enter adult ticket price ";
cin>>aprice;
cout<<"Enter number of child ticket sold ";
cin>>csold;
cout<<"Enter number of adult ticket sold ";
cin>>asold;
cout<<"Enter the percentage you want to donate ";
cin>>percent;
totala=aprice*asold;
totalc=cprice*csold;
totalamount=totala+totalc;
percentage=totalamount-(percent*totalamount)/100;
cout<<"The total amount you generated is "<<totalamount<<endl;
cout<<"The amount after donation is "<<percentage;
}