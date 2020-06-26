//constructor overloading

#include<iostream>
using namespace std;
class complex
{
	float x,y;
	public:
		complex()
		{
		}
		complex (float a)
		{
			x=y=a;
			
		}
		complex (float real ,float imag)
		{
			x=real;
			y= imag;
			
		}
		friend complex sum(complex,complex);
		friend void show (complex);
		
};
complex sum(complex c1,complex c2)
{
	complex c3;
	c3.x=c1.x+c2.x;
	c3.y=c1.y+c2.y;
	
	return c3;
	
}

void show( complex c )
{
	cout<<"+i"<<c.x<<"+j"<<c.y<<endl;
	
}

int main()
{
	complex A(3.3,1.2);
	complex B(5.1);
	complex C;
	C=sum(A,B);
	
	cout<<"A=  ";
	show (A);
	
	cout<<"B=   ";
	show(B);
	
	cout<<"C=   ";
	show(C);
	
	complex P,Q,R;
	P=complex(3.5,1.1);
	Q=complex(2.8,3.1);
	R=sum(P,Q);
	cout<<endl;
	cout<<"P=  ";
	show(P);
	cout<<"Q=   ";
	show(Q);
	cout<<"R=  ";
	show(R);
	
	return 0;
	
}
