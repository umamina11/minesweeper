//exception handling
#include<iostream>
using namespace std;
int main()
{
	int nume;
	int deno;
	int result;
	
	cout<<"enter numerator and deninometer"<<endl;
	cin>>nume>>deno;
	
	
	try
	{
		if(deno==0)
		{
			throw deno;
		}
			
	result=nume/deno;
	}
	catch(int ex)
	{
		cout<<"exception :divivsin with zero not possible"<<endl;
		
	}

	cout<<"division is:"<<result;
	return 0;
}
