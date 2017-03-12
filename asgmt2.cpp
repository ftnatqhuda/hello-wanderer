#include<iostream>

using namespace std;
int time(int, int&, int&, int&);
int main()
{
	int seconds, hour, min, sec;
	cout<<"Enter the time in seconds : ";
	cin>>seconds;
	cout<<endl;
	
	time(seconds, hour, min, sec);
	cout<<"The time changed in hours is "<<hour<<endl;
	cout<<endl;
	cout<<"The time changed in minutes is "<<min<<endl;
	cout<<endl;
	cout<<"The time changed in seconds is "<<sec<<endl;
	cout<<endl;
	cout<<"The time in the form of(hour:min:sec) is: "<<hour <<":"<<min<<":"<<sec<<endl;
	return 0;
}
int time(int seconds, int &hour, int &min, int &sec)
{
	hour=seconds/3600;
	min=seconds%3600/60;
	sec=seconds%60;
	return hour,min,sec;
}
