#include<iostream>
using namespace std;
void Aline(string country,int price)
{
if(country=="Pakistan")
{
int pak=0.05*price;
cout<<"Discount ticket price is:  "<<pak;
}
else if(country=="Ireland")
{
int irl=0.1*price;
cout<<"Discount ticket price is:  "<<irl;
}
else if(country=="India")
{
int ind=0.2*price;
cout<<"Discount ticket price is:  "<<ind;
}
else if(country=="England")
{
int eng=0.3*price;
cout<<"Discount ticket price is:  "<<eng;
}
else if(country=="Canada")
{
int cand=0.1*price;
cout<<"Discout ticket price is:  "<<cand;
}

}
main()
{
while (true) {
string country;
int price;
cout<<endl;
cout<<"enter country name:  ";
cin>>country;
cout<<"enter price in dollars:  ";
cin>>price;
Aline(country,price);
}
}