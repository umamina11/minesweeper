//multipe inheritance 
#include<iostream>
using namespace std;

class A
{
	public:
		void printmessage()
		{
			cout<<"this is class A "<<endl;
		}
};


class B
{
	public:
		void printmessage()
		{
			cout<<"this is class B"<<endl;
			
		}
};

class AB:public A,public B
{
	public:
		void printmessage()
		{
			A::printmessage();
				B::printmessage();
				
				cout<<"this is AB class"<<endl;
		}
};

int main()
{
	AB obj;
	obj.printmessage();
	
	return 0;
	
}
