#include<iostream>
using namespace std;
void replace(char *ptr, char find, char rep);
int main()
{
	char str[30];
	cout<<"Please enter a word : ";
	cin>>str;
	char find, rep;
	cout<<"What letter you want to change? : ";
	cin>>find;
	cout<<"You want to change  the letter to ...... ? :";
	cin>>rep;
	
	replace(str, find, rep);
	cout<<str<<endl;
	
	return 0;
}
void replace(char *p, char f, char r)
{
	int x;
	for(x=0; x<30; x++)
	{
		if(* (p+x)==f)
		*(p+x)=r;
	}
}
