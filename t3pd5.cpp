#include <iostream>
using namespace std;
int taxcalculator(float itemprice, float taxrate)
{
	float taxamount,finalprice;
	taxamount = itemprice * (taxrate / 100);
	finalprice = itemprice + taxamount;
	cout << "Final Price::" << finalprice;

	return finalprice;
}


int main()
{ 
	char m, e, s, v,t,veh;
	//camel notation => taxRate
	//pascal notation => TaxRate
	//underscore notation => tax_rate

	float taxrate,itemprice;
	cout << "enter item price";
	cin >> itemprice;
	cout<<"enter vehicle type:   m for Motorcycle,e for Electric,s for Sedan,v for Van,t for Truck";
	cin>>veh;
	taxrate = 0;
	if (veh == 'm')
	{
		taxrate = 6;
	}
	if (veh == 'e')
	{
		taxrate = 8;
	}
	if (veh == 's')
	{
		taxrate = 10;
	}
	if (veh == 'v')
	{
		taxrate = 12;
	}
	if (veh == 't')
	{
		taxrate = 15;
	}
	taxcalculator(itemprice, taxrate);
	return 0;
	
}