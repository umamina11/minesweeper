#include<iostream>
using namespace std;
class pract
{
	int a,b,c;
	public:
		pract(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void show()
		{
			cout<<"values\n"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<endl;
			
		}
};
int main()
{
	pract obj(10,20,30);
	pract obj1(40,50,60);
	pract obj2(11,12,13);
	obj1.show();
	obj2.show();
	
	return 0;
}
