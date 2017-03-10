#include<iostream>
#include<cmath>
using namespace std;
int convertdays(int, int, int);
int main()
{
	int month=3, day=11, year=2017, date;
	cout<<day<<endl;
	cout<<endl;
	cout<<month<<endl;
	cout<<endl;
	cout<<year<<endl;
	cout<<endl;
	cout<<"The date after being converted\n\nin the form of integer numbers is "<<year*1000+month*100+day<<endl;
	cout<<endl;
	cout<<"SO, TODAY IS 11 MARCH 2017"<<endl;
	cout<<"DEAR BESTFRIEND, HAPPY 20th BIRTHDAY SHAHFIEQA WAFA BINTI SHAHIMI :)"<<endl;
	cout<<"A YEAR OLDER AND WISER. JADI MATANG BANYAK SIKIT DAN JANGAN STRESS SANGAT :)"<<endl;
	cout<<"HAVE A BLAST BIRTHDAY SAHABAT :)"<<endl;
	
	convertdays(month, day, year);
	
	return 0;
}
int convertdays(int month, int day, int year)
{
	int date;
	date=year*1000+month*100+day;
	
	return date;
}
