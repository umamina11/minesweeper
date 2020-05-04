//converting temperature using class
#include<iostream>
using namespace std;
class temp
{
	float f;
	float c;
	public:
		void getdata();
		void convertor();
		void display();
		
};
void temp::getdata()
{
	cout <<"temperature in f:"<<endl;
	cin>>f;
}
void temp::convertor()
{

		c=(f-32)*(0.5);
}
void temp::display()
{
	cout << "temperature in f"<<f<<endl;
	cout <<"temperature in C"<<c<<endl;
	
}
int main ()
{
	temp t;
	t.getdata();
	t.convertor();
	t.display();
	return 0;
}
