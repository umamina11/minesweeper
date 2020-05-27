//array of objects
#include<iostream>
using namespace std;
class employee
{
	char name[30];
	float age;
	public:
		void getdata();
		void putdata();
	
};
void employee::getdata()
{
	cout<<"entre name:"<<endl;
	cin>>name;
	cout<<"entre age:"<<endl;
	cin>>age;
	
}
void employee::putdata()
{
	cout<<"name"<<name<<endl;
	cout<<"age"<<age<<endl;
	
}
int main()
{
	const int size=5;
	employee manager[size];
	for(int i=0;i<size;i++)
	{
		cout<<"details of manager"<<i+1<<endl;
		manager[i].getdata();
		
	}
	cout<<"\n";
	for (int i=0;i<size;i++)
	{
		cout<<"manager"<<i+1<<endl;
		manager[i].putdata();
		
	}
	return 0;
}
