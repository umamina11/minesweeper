//multilevel inheritance 
#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
		public:
			void getnum(int);
			void putdata();
			
			
			
};

void student:: getnum(int a)
{
	rollno=a;
}

void student::putdata()
{
	cout<<"roll number: "<<rollno<<endl;
	
}
class test : public student
{
	protected:
		float sub1;
		float sub2;
		public:
			void getmarks(float,float);
			void putmarks();
};
void test::getmarks(float x,float y)
{
	sub1=x;
	sub2=y;
}

void test::putmarks()
{
	cout<<"marks of subject 1"<<sub1<<endl;
	cout<<"marks of subject 2"<<sub2<<endl;
	
}
class result:public test
{
	float total;
	public:
		void display(void);
		
};

void result::display()
{
	total=sub1+sub2;
	putdata();
	putmarks();
	cout<<"total number ="<<total<<endl;
}


int main()
{
	result student1;
	student1.getnum(189);
	student1.getmarks(75.0,89.4);
	student1.display();
	
	return 0;
}
