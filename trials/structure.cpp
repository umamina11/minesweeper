//create structure named person to store his namae age and salary
#include<iostream>
using namespace std;
struct person
{
	char name[50];
	int age;
	float salary;
	
};
int main()
{
	person p1;
	
	cout<<"information"<<endl;
	cout<<"enter the name of the person"<<endl;
	cin.getline(p1.name,100);
	cout<<"entre the age"<<endl;
	cin>>p1.age;
	cout<<"enter salary"<<endl;
	cin>>p1.salary;
	
	
	cout<<"persons details"<<endl;
	cout<<"name: "<<p1.name<<endl;
	cout<<"age: "<<p1.age<<endl;
	cout<<"salary: "<<p1.salary<<endl;
	
	
	return 0;
}
