#include<iostream>
int convertdays(int, int, int,int);
using namespace std;

int main()
{
	int month,day,year,date=0;
cout << "This program will convert date(month/day/year) to integer numbers(yyyyddmm)"<<endl;
	 convertdays(month,day,year,date);
 
return 0;
}
int convertdays(int month, int day, int year,int date)
{
	do
   {	 
   	cout <<"\nInput month: ";
     	cin >>month;
     
     	if(month<1 || month>12)
       	cout<<"Invalid"<<endl;
   } while(month<1 || month>12);
  
   do{           
        cout <<"\nInput day: ";
     	cin >>day;
     	
        if(day<1 || day>31)
       cout <<"Invalid"<<endl;
     }while(day<1||day>31);
   
   do{
     	cout <<"\nInput year: ";
     	cin >>year;
  
     if(year<2000 || year>2050)
       cout<<"Invalid"<<endl;
    }while(year<2000||year>2050);
	date+=year*10000+month*100+day;
	cout<<"Your date in form of (month/day year): " << month <<"/"<< day <<"/" << year <<endl;
 	cout <<"\nThe conversion of date is: " << date <<endl;
	return day,year,month,date;		
}

