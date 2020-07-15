//array operations
#include<iostream>
using namespace std;
int main()
{
	int a[4];
	int b[4];
	int add[4];
	int sub[4];
	int mult[4];
	
	
	cout<<"entre the elements of array"<<endl;
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	
		cout<<"entre the elements of another  array"<<endl;
	for(int i=0;i<4;i++)
	{
		cin>>b[i];
	}
	cout<<"addition of array"<<endl;
	for(int i=0;i<4;i++)
	{
		add[i]=a[i]+b[i];
		cout<<add[i]<<"  "<<endl;
		
	}
	
		cout<<"subtraction of array"<<endl;
	for(int i=0;i<4;i++)
	{
		sub[i]=a[i]*b[i];
		cout<<sub[i]<<"  "<<endl;
		
	}
	
		cout<<"multiplication of array"<<endl;
	for(int i=0;i<4;i++)
	{
		mult[i]=a[i]*b[i];
		cout<<mult[i]<<"  "<<endl;
		
	}
	return 0;
}
