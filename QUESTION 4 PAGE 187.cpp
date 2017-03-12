#include<iostream>
using namespace std;
int main()
{
	float gall=10;
	cout<<"This program converts gallons to litres from 10 to 20( 1 gallon = 3.785 )"<<endl;
	
	do
	{
		cout<<"gall"<<gall<<":\t";
		cout<<gall*3.785<<endl;
		gall++;
	}
	while(gall<=20);
	
	return 0;
}
