//check leap year 
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter a year"<<endl;
	cin>>year;
	
	
	if(year%4==0)
	{
		if(year%100==0)
		{
			if (year%400==0)
			{
				cout<<"it is a leap year";
			}
			
		}
		else
		{
		
		cout<<"this is not a leap year"<<endl;
		}
	}
	else
	{
		cout<<"not a leap year"<<endl;
	}
	return 0;
}
