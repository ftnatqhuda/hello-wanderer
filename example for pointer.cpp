#include<iostream>
using namespace std;
int main()
{
	int *numAddr;
	int miles, dist;
	dist= 130;
	miles= 27;
	numAddr= &miles;
	
	cout<<"The address stored in numAddr is "<<numAddr<<endl;
	cout<<"The value now pointed to by numAddr is "<<numAddr<<"\n\n";
	numAddr= &dist;
	cout<<"The address now stored in numAddr is "<<numAddr<<endl;
	cout<<"The value pointed to by numAddr is "<<numAddr<<endl;
	
	return 0;
}
