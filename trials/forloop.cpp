// take a number from user aqnd print the table of it
#include<iostream>
using namespace std;
int main()
{
	int num;
	int x;
	cout<<"entre the number"<<endl;
	cin>> num;
	for(int i=1;i<=10;i++)
	{
		x=num*i;
		cout<<x<<endl;
	}
	return 0;
}
