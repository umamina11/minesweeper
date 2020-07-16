//dynamic memeory allocation
#include<iostream>
using namespace std;
int main()
{
	int size;
	int *ptr;
	
	
	cout<<"entre the size of the array"<<endl;
	cin>>size;
	
	ptr =new int [size];
	cout<<"entre the elements"<<endl;
	
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	cout<<"values in the array"<<endl;
	for (int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
	return 0;
}
