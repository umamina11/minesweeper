//
#include<iostream>
using namespace std;
int maximum(int a,int b);
int main()
{
	int a,b;
	
	cout<<"enter two numbers "<<endl;
	cin>>a>>b;
	
	int c = maximum(a,b);
	cout<<"greatest among two is "<<c<<endl;
	
	
	cout<<"another such pair of numbers is  4 and 9 and greates number is"<<maximum(4,9)<<endl;
	
	return 0;
}
int maximum(int x,int y)
{
	if(x>y)
	return x;
	else 
	return y;
	
}
