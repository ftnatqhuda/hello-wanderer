#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double x, a, b, c, polynomialValue;
	
	cout<<"Enter the coefficient of x :";
	cin >> x;
	cout<<"Enter the coefficient of a :";
	cin>> a;
	cout<<"Enter the coefficient of b :";
	cin>> b;
	cout<<"Enter the coefficient of c :";
	cin>> c;
	polynomialValue = a*pow(x,2) + (b*x) + c;
	cout<<"The polynomial value is "<<polynomialValue<<endl;
	return 0;
}
