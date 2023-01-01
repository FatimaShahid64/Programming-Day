#include<iostream>
using namespace std;
void Reverse(string input)
{
if(input=="true")
{
cout<<"false";
}
else if(input=="false")
{
cout<<"true";
}
}
main()
{
 string input;
cout<<"enter input true or false";
cin>>input;
Reverse(input);
}