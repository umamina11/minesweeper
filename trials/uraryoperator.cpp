//operator overloading -urary operator
//increment and decerement
#include<iostream>
using namespace std;
class incredecere
{
	int a,b;
	
	
	public:
		
	void data()
	{
		cout<<"entre  first number"<<endl;
		cin>> a;
		
		cout <<"entre the second number"<<endl;
		cin>>b;
		
	}
	void operator++()
	{
		a++;
		
		b++;
	}
	void operator--()
	{
		a--;
		
		b--;
	}
	void display()
	{
		cout<<"A=     "<<a<<endl;
		
		cout<<"B=      "<<b<<endl;
	}
};
int main()
{
	incredecere id;
	 id.data();
        --id;
        cout<<"\n After Decrementing : "<<endl;
        id.display();
        ++id;
        ++id;
        cout<<" After Incrementing : "<<endl;
        id.display();
        return 0;
}

