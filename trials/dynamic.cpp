//dynamic initialization of objects

 
#include <iostream>
using namespace std;


class Student
{

		int rNo;
		float perc;

		public:
		 
			Student(int r, float p)
			{
				rNo = r;
				perc = p;
			}

	
			void read(void)
			{
				cout<<"Enter roll number: ";
				cin>>rNo;
				cout<<"Enter percentage: ";
				cin>>perc;
			}
			
			void print(void)
			{
				cout<<endl;
				cout<<"Roll number: "<<rNo<<endl;
				cout<<"Pecentage: "<<perc<<"%"<<endl;
			}
};


int main()
{


	cout<<"Enter roll number : ";
	int rollnum;
	cin>>rollnum;
	cout<<"Enter percentage : ";
	float per;
	cin>>per;


	 Student s(rollnum, per);

	cout<<"After initializing the object"<<endl;
	s.print();


	s.read();
	s.print();

	return 0;
}
