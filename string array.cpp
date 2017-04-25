#include<iostream>
using namespace std;
int main()
{
	string greeting="Good morning !\n";
	char name[]="UIA";
	int nums[]={1, 9, 8, 3};
	cout<<greeting<<endl;
	cout<<nums[3]<<endl;
	cout<<name<<endl;
	cout<<"Addresses of the array : \n";
	
	for(int i=0; i<4; i++)
	{
		cout <<&name[i]<<endl;
	}
	return 0;
}
