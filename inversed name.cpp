#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[30];
	char *i;
	int x;
	i=name;
	strlen (name) ;
	
	cout << "Please enter your name : "<<endl;
	cin >> name;
	cout << "Your name in inverted form is ";
	
	for(x=strlen(name)-1; x>=0; x--)
		 cout<<*(i+x);
		
	return 0;
}
