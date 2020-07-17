//create an array of structure taking input from user displaying name,
//age and salary

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
	person p[2];
	cout <<"entre the details as name,age and salary"<<endl;
	for(int i=0;i<2;i++)
	{
		cin>>p[i].name;
		cin>>p[i].age;
		cin>>p[i].sal;
		
	}
	
	cout<<"details of user are"<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<"name: "<<p[i].name<<endl;
		cout<<"age: "<<p[i].age<<endl;
		cout<<"salary:"<<p[i].sal<<endl;
		
	}	
	return 0;
}
