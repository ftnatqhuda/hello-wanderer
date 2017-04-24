#include<iostream>
using namespace std;
void display(int);
int main()
{
	int n;
	cout<<"\nEnter a number between 1 to 7 : ";
	cin>>n;
	display(n);
	
	return 0;
}
void display(int n)
{
	char* days[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	cout<<"The number entered refers to "<<days[n]<<".";
}
