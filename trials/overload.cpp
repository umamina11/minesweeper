//function overloading
#include<iostream>
using namespace std;
class add
{
	int a,b;
	float p,q,m;
	double l;
		public:

		sum(int ,int )
			{
				return (a+b);
			}
		 sum(float ,float )
			{
				return (p+q);
			}
		 sum(double ,float )
			{
				return(l+m);
			}
};
int main()
{
	add A;
	int a,b;
	float p,q,m;
	double l;
		cout<<"entre the integer value"<<endl;
		cin>>a>>b;
		cout<<"sum of the integers"<<A.sum(a,b)<<endl;
		cout<<"entre the float values"<<endl;
		cin>>p>>q;
		cout<<"sum of float values"<<A.sum(p,q)<<endl;
		cout <<"entre the double and float value"<<endl;
		cin>>l>>m;
		cout<<"sum of double and float "<<A.sum(l,m)<<endl;

	return 0;
	
}


