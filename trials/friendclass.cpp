//friend class 
#include<iostream>
#include<conio.h>
using namespace std;
class info
{
	private:
		char u;
		char name=u;
		int age=19;

			friend class data;
};
class data
{
	public:
		void display(info in)
		{
			cout<<"name of the student"<<endl;
			cout<<"name.in"<<endl;
			cout<<"age of student"<<endl;
			cout<<"age.in"<<endl;
					
		}
};
int main()
{
	info in;
	data d;
	d.display(in);
	getch;
	return 0;
}
