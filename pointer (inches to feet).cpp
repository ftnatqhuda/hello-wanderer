#include<iostream>
#define PI 3.142
void convert_ft(double *r, double *d, double *a);
using namespace std;
int main()
{
	double rad, diameter, area;
	
	cout<<"Welcome to this programme :)"<<endl;
	cout<<"Enter radius : ";
	cin>>rad;
	diameter=rad*2;
	area=PI*rad*rad;
	
	convert_ft(&rad, &diameter, &area);
	
	return 0;
}
void convert_ft(double *r, double *d, double *a)
{
	cout<<"The radius in units of feet is "<<*r/12<<endl;
	cout<<"The diameter in units of feet is "<<*d/12<<endl;
	cout<<"The area in units of square feet is "<<*a/12<<endl;
}
