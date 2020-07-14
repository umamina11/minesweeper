//palidrone number
#include<iostream>
using namespace std;
int main()
{

	int n,num,digit,rev=0;
		cout<<"entre the number ";
		cin>>num;
		
		while(num!=0)
		{
			digit=num%10;
			rev=(rev*10)+digit;
			num=(num/10);
			
		}
		
		if(n==rev)
		{
			cout<<"palidrone";
			
		}
		else
		{
			cout<<"not palindrone";
		}
	return 0;
}
