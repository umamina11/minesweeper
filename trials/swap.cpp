//swapping
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout <<"enter two number"<<endl;
	cin>>x>>y;
	
	cout <<"before swapping"<<endl;
	cout<<"x=  "<<x<<endl;
	cout<<"y=   "<<y<<endl;
	
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	
	
	cout <<"after swapping"<<endl;
	cout<<"x=  "<<x<<endl;
	cout<<"y=   "<<y<<endl;
}
