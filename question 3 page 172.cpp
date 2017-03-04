#include<iostream>
using namespace std;
int main()
{
	char code, i=1;
	do
	{
	cout<<"Enter the code :";
	cin>>code;
	i++;
	
	switch(code)
	{
		case 'A':
			cout<<"The storage drive capacity is 2 GB."<<endl;
			break;
		case 'B':
			cout<<"The storage drive capacity is 4 GB."<<endl;
			break;
		case'C':
			cout<<"The storage capacity is 16 GB."<<endl;
			break;
		case 'D':
			cout<<"The storage capacity is 32 GB."<<endl;
			break;
		default :
			cout<<"Thank  you for using our system ."<<endl;
	}
	}
	while(i<=5);
	return 0;
}
