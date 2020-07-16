//poiters
#include<iostream>
using namespace std;
int main()
{
	int var=5;
	int *ip;
	double *dp;
	char *ch;
	
	
	ip=&var;
	cout<<"variable value"<<var<<endl;
	cout<<"address in pointer"<<ip<<endl;
	cout<<"pointer pointing to a value"<<*ip<<endl;
	cout<<endl;
	
	
	*ip=6;
		
	
	ip=&var;
	cout<<"variable value"<<var<<endl;
	cout<<"address in pointer"<<ip<<endl;
	cout<<"pointer pointing to a value"<<*ip<<endl;
	
	
	return 0;
	
}
