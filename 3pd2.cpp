#include<iostream>
using namespace std;
main()
{
float bagsize;
float bagcost;
float bagarea;
float cost;
float area;
cout<<"Enter the bag size in pounds ";
cin>>bagsize;
cout<<"Enter the bag cost ";
cin>>bagcost;
cout<<"Enter the area covered by each bag per square feet ";
cin>>bagarea;
cost=bagcost/bagsize;
area=bagarea*bagsize;
cout<<"Cost of the fertilizer per pound is "<<cost<<endl;
cout<<"Cost of fertilizing the area per square feet "<<area;
} 