//wap to print a message until user enter x
#include<iostream>
using namespace std;
int main()
{
	char mychar;
	
	cout<<"entre a character"<<endl;
	cin>>mychar;
	
	while(mychar=='x')
	{
		cout<<"dream it,wish it,do it"<<endl;
		cout<<"enter chacacter again"<<endl;
		cin>>mychar;
	}
	return 0;
}
