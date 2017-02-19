#include<iostream>
using namespace std;
int main()
{
	int year, weight;
	cout<<"Enter model year :";
	cin>>year;
	cout<<"Enter automobile's weight :";
	cin>>weight;
	
	if(year<=1990 && weight <2700)
	cout<<"The weight class is 1 and the registration fee is 26.50 myr."<<endl;
	else if(year<=1990 && weight>2700 && weight<3800)
	cout<<"The weight class is 2 and the registration fee is 35.50 myr."<<endl;
	else if(year<=1990 && weight>3800)
	cout<<"The weight class is 3 and the registration fee is 56.50 myr."<<endl;
	else if(year>1991 && year<1999 && weight<2700)
	cout<<"The weight class is 4 and the registration fee is 35.00 myr."<<endl;
	else if(year>1991 && year<1999 && weight>2700 && weight<3800)
	cout<<"The weight class is 5 and the registration fee is 45.50 myr."<<endl;
	else if(year>1991 && year<1999 && weight>3800)
	cout<<"The weigt class is 6 and the registration fee is 62.50 myr."<<endl;
	else if(year>=2000 && weight<3500)
	cout<<"The weight class is 7 and the registration fee is 49.50 myr."<<endl;
	else if(year>=2000 && weight>=3500)
	cout<<"The weight class is 8 and the registration fee is 62.50 myr."<<endl;
	
	return 0;
}
