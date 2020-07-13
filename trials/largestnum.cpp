//largest of the three number  check
#include<iostream>
using namespace std;
int main()
{
	cout<<"largest of the three number"<<endl;
	int x,y,z;
	cout<<"entre the 3numbers"<<endl;
	cin>>x>>y>>z;
	if(x>y)
	{
		if(x>z)
		{
			cout<<x<<"is the greatest number"<<endl;	
		}
		else
		{
			cout<<z<<"is the greatest number"<<endl;
		}
	}
	else if(y>x)
	{
		
		if(y>z)
		{
			cout<<y<<"is the greatest number"<<endl;
		}
		else
		{
			cout<<z<<"is the greatest number"<<endl;
		}
	}
	return 0;
}
