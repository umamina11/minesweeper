//create a variable of struct type
//create a pointerand point to it 
//and use the pointer to take input fand display output

#include<iostream>
using namespace std;
struct person
{
	string name;

	int age;
	float sal;
	
};
int main()
{
	person p1;
	person *ptr=&p1;	
	cout<<"entre the details of the person like name ,age and salary"<<endl;
	cin>>ptr->name;
	cin>>ptr->age;
	cin>>ptr->sal;
	
	

	
	
//	person *ptr=&p1;
	
		cout<<"details of person are"<<endl;
	cout<<"name: "<<ptr->name<<endl;
	cout<<"age: "<<ptr->age<<endl;
	cout<<"salary: "<<ptr->sal<<endl;
	
	return 0;
}
