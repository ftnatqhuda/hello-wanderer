#include<iostream>
using namespace std;
int main()
{
	int fmax[10];
	int maxval, maxindex;
	cout<<"Enter 10 integers : \n";
	cin>>fmax[0];
	maxval=fmax[0];
	maxindex=0;
	
	for(int i=1; i<10; i++)
	{
		cin>>fmax[i];
		if(fmax[i]>maxval)
		{
			maxval=fmax[i];
			maxindex=i;
		}
	}
	cout<<"The maximum value is "<<maxval<<endl;
	cout<<"The index of maximum value is "<<maxindex<<endl;
	
	return 0;
}
