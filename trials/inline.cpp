//inline function
#include<iostream>
using namespace std;


inline float mul(float x,float y)
{
	return (x*y);
	
}
inline double div(double p,double q)
{
	return (p/q);
	
}

int main()
{
	float a;
	float b;
	cout<<"give the required numbers"<<endl;
	cin>>a>>b;
	cout <<"multiplication"<<endl;

	cout<<mul(a,b)<<endl;
	
	cout <<"division"<<endl;
	cout<<div(a,b)<<endl;
	return 0;
}
