#include<iostream>
using namespace std;
struct Date
{
	int month;
	int day;
	int year;
};
struct Time
{
	int hour;
	int min;
	int sec;
};
int main()
{
	Date now;
	now.day=15;
	now.month=5;
	now.year=2017;
	
	cout<<"Today is "
		<<now.day<<'/'
		<<now.month<<'/'
		<<now.year<<endl;
		
	Time current;
	current.hour=23;
	current.min=33;
	current.sec=13;
	
	cout<<"It's already "
		<<current.hour<<':'
		<<current.min<<':'
		<<current.sec<<endl;
	
	return 0;
}
