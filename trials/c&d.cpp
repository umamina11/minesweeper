//constructors and destructors 
#include<iostream>
using namespace std;
class constructor
{
	int p,q;
	public:
		constructor(int x,int y)
		{
			p=x;
			q=y;
		}
		void display()
		{
			cout<<p<<endl;
			cout<<q<<endl;
		}
};
int main()
{
	constructor item1(10,20),item2(30,40);

	item1.display();
	item2.display();
	 return 0;
}
