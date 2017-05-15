#include<iostream>
#include<iomanip>
using namespace std;
struct Employee
{
	int idNum;
	double payRate;
	double hours;
};
double calcNet(Employee);
void printObj(Employee temp);
int main()
{
	Employee emp={6782, 8.93, 40.5};
	
	double netPay;
	netPay=calcNet(emp);
	cout<<setw(10)
		<<setiosflags(ios::fixed)
		<<setiosflags(ios::showpoint)
		<<setprecision(2);
		
	cout<<"The net pay for employee "<<emp.idNum
		<<" is $"<<netPay<<endl;
		
	return 0;
}
double calcNet(Employee temp)
{
	return (temp.payRate*temp.hours);
}
void printObj(Employee temp)
{
	
	printObj(Employee temp);
	
	cout<<"The net pay for employee "<<emp.idNum
		<<" is $"<<netPay<<endl;
}
