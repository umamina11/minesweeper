//2D array
#include<iostream>
using namespace std;
int main()
{
	int arr[2][2];
	int arr1[2][2];
	int add[2][2];
	int sub[2][2];
	
	
		cout<<" entre the elements of array"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}	

	
	cout<<" the elements of array"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
	}	
	
	
	cout<<"enter the elements of array2"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	
		cout<<"the elements of array2"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr1[i][j]<<"";
		}
	}
	

	
		cout<<" addition of array"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			add[i][j]=arr[i][j]+arr1[i][j];
			cout<<add[i][j];
		}
	}	
	
		cout<<" subtraction of array"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			sub[i][j]=arr[i][j]-arr1[i][j];
			cout<<sub[i][j];
		}
	}	
	
	return 0;
}
