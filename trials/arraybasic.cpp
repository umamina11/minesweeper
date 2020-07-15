// basic array
#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,5,3,9,4};    //allocation of values at same time
	float arr1[3];				// allocation of values after defining array
	arr1[0]=1.4;
	arr[1]=3.2;
	
	char charr[4]={'p','j','i','h'};		//character array
	
	
	cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<endl;
	cout<<arr1[0]<<arr1[1]<<arr1[2]<<endl;
		cout<<charr[0]<<charr[1]<<charr[2]<<charr[3]<<endl;
	
	
	int temp_arr[3];				//input from user
	
	cout<<"enter the three integer"<<endl;
	
	for(int i=0;i<3;i++)
	{
		cin>>temp_arr[i];
	}
	
	cout<<"the values are"<<endl;	
	for(int i=0;i<3;i++)
	{
		cout<<temp_arr[i]<<endl;
	}
	
	
	
	
	
	
	return 0;
}
