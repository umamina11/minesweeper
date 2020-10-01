#include<bits/stdc++.h>
using namespace std;
int main ()
{
 	int  n;
 	int  temp;
 	int count=0;
 	int Swaps;
 
 
    cin>>n;                                   //size of array
    int a[n];
    
    for (int i = 0; i <n; i++) 
    {
        cin>>a[i];
    } 
    for (int i = n-1; i >0; i--) 
    {
        Swaps = 0;
    for ( int j = 0; j <i; j++) 
    {           
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            Swaps++;
            count++;
        }
    }
    if (Swaps == 0) 
    {
        break;
    }
    }   
    cout<<"Array is sorted in "<<count<<" swaps.\n";
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
	
}
