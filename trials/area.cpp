//calculating area of differrent shapes
#include<iostream>
using namespace std;
class area
{
	int l,b,r,a;
	public:
		void getdata();
		void square();
		void rectangle();
		void circle();
		void display();
		
};
void area::getdata()
{
	int l,b,r,a;
	
	cout<<"area of diferrent figures"<<endl;
	
}
void area::square()
{
	int l;
	cout<<"area of square"<<endl;
	cout <<"entre the length"<<endl;
	cin>>l;
	a=l*l;
	cout << "area is :"<<a<<endl;
}
void area::rectangle()
{
	int l,b;
	cout<<"area of rectangle"<<endl;
	cout << "entre the dimension"<<endl;
	cin>>l>>b;
	a=l*b;
	cout <<"area is:"<<a<<endl;
	
}
void area::circle()
{
	int r;
	cout<<"area of circle"<<endl;
	cout <<"entre the dimensions"<<endl;
	cin>>r;
	a=4*3.14*r;
	cout<<"area :"<<a<<endl;
}
void area::display()
{
	cout <<endl;
}
int main ()
{
	area A;
	int l,b,h,a;
	A.getdata();
	A.square();
	A.rectangle();
	A.circle();
	return a;
	
}
