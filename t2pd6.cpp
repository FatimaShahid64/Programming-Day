#include<iostream>
using namespace std;
float printbill(char service, int minutes, char time);
main()
{
    char service;
    int minutes;
    char time;
    float result;
    cout<<"Enter which service you are using(Regular or Premium) select(r/p): ";
    cin>>service;
    cout<<"Enter the time D for day and N for night call: ";
    cin>>time;
    cout<<"Enter number of minutes you used the service: ";
    cin>>minutes;
    result=printbill(service, minutes, time);
    cout<<"Bill: "<<result;
}
float printbill(char service, int minutes, char time)
{
    float bill, totalbill;
    if (service=='r' && minutes>50)
    {  
            bill=minutes*0.20;
    }      
    else 
    {
        return 0;
    } 
    
    if (service=='p')
    {
        if (time=='d' && minutes>75)
        {
            bill=minutes*0.10;
        }
        else
        {
            return 0;
        }
    }
    if (service=='p')
    {
        if (time=='n' && minutes>100)
        {
            bill=minutes*0.05;
        }
        else
        {
            return 0;
        }
    }

    return bill;
}