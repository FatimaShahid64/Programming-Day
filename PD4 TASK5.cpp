#include<iostream>
#include<windows.h>
using namespace std;
main()
{
int y;
cout<<"###############################################"<<endl;
cout<<"#   University Admission Management           #"<<endl;
cout<<"#               System                        #"<<endl;
cout<<"#                                             #"<<endl;
cout<<"###############################################"<<endl;
cout<<"select one of the folowing"<<endl;
cout<<"1 add new student record"<<endl;
cout<<"2 view all reords"<<endl;
cout<<"3 show records in descending order"<<endl;
cout<<"4 exit"<<endl;
cout<<"your option"<<endl;
cin>>y;
if(y==1)
{
cout<<"add new student record";
}
if(y==2)
{
cout<<"view all records";
}
if(y==3)
{
cout<<"show records in descending order";
}
if(y==4)
{
cout<<"exit";
}
}