#include<iostream>
using namespace std;
int main()
{
	double Celcius, Fahreinheit;
	cout<<"Enter the temperature in degree Celcius :";
	cin>> Celcius ;
	Fahreinheit= (9.0/5.0)*Celcius+32.0;
	cout<<"The degrees in Fahreinheit is "<<Fahreinheit<<endl;
	return 0;
}
