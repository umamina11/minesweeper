//pointer to object and pasing object as argument and returning objects
//complex num
#include<iostream>
using namespace std;

class complex

{
	private:
		int real;
		float imag;
		public:
			complex()
			{
			}	
				complex(int r,float i)
				{
					real=r;
					imag=i;
					
				}
				void displaydata()
				{
					cout<<"complex number is :"<<real<<"+"<<imag<<"i"<<endl;
				}
				int getreal()
				{
					return real;
				}
				float getimaginary()
				{
					return imag;
				}
			
};

complex  addnum(complex n1,complex n2)
{
	int r;
	float i;
	r=n1.getreal()+ n2.getreal();
	i=n1.getimaginary()+ n2.getimaginary();
	complex temp(r,i);
	

	
	return temp;
	
}

int main()
{
	complex c(2,6), c1(4,8), c2(9,2), c3;

	c.displaydata();
	c1.displaydata();
	
	cout<<"addition of complex numbers"<<endl;
	c3=addnum(c1,c2);
	c3.displaydata();
	
	cout<<"pointer to object "<<endl;
	complex *ptr1;
	ptr1=&c2;
	ptr1->displaydata();
	
	cout<<"address"<<endl;
	cout<<ptr1;
	return 0;
	
}
