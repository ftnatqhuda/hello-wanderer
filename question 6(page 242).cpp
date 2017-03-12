#include<iostream>
#include<math.h>
using namespace std;
int powfun(int, int);
int main()
{
	int z, num;
	cout<<"Enter an integer number :"<<endl;
	cin>>num;
	cout<<"Enter a positive integer power :"<<endl;
	cin>>z;
	cout<<"The answer is "<<powfun(num, z)<<endl;
	
	powfun(num, z);
	
	return 0;
}
int powfun(int num, int z)
{
	int x;
	x=pow(num,z);
	
	return x;
}
