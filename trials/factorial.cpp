//calculate factorial
#include<iostream>
using namespace std;
int main()
{
	int x,fact=1,i=1;
	cout<<"entre the number whose factorial you want to find"<<endl;
	cin>>x;
	
	while(i<=x)
	{
		
		fact=fact*i;
		i++;
	}
	cout<<"factorial is"<<fact<<endl;
	
	return 0;
}
