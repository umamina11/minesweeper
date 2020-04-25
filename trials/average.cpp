
 #include<stdio.h>
#include<iostream>
#include<time.h>
#include<conio.h>
using namespace std;

void averageuserinput()
{
    int  sum, avg;
    int n;
	   cout<<"how many elements you want in array"<<endl;
		cin>>n;
	if(n!=0)
	{
       // int array[]= new int[n];
       int array[n];
        for(int i=0; i < n; i++)
        {
            cout<<"elements"<<endl;
            cin>>array[i];		
        }
        
        // call the average function
        avg = average(array,n)
		cout<<"the average of number is:"<<avg;
		cout<<endl;		
	}
	else
	{
		cout<< "entre a non zero number"<<endl;
	}
}
int average( int array[], int n)
{
	int sum, avg;
	for(int i = 0; i < n; i++)
	{
		sum = sum + array[i];		
	}
		avg = sum/n;
	return avg;
}
int main()
{


	int a[10],n ,sum,i,avg;
	cout <<"sum of numbers"<<endl;
	sum = sum + a[i];
	cout << "average of the number"<<endl;
	avg=  sum/n;
	average(a,n);
	
	return 0;
}

