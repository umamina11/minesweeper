//creating objects with two different methods
#include<iostream>
using namespace std;
class item
{
	int i;
	char r;
	public:
		void list();
	
		
}x;
void item::list()
{
	int number;
	char itemname;
	i=number;
	r=itemname;
	cout<< "entre the number of item"<<endl;
	cin>>i;
	cout<<"put the item name"<<endl;
	cin>>r;
}

int main()
{
//	item x;
	x.list();
	return 0;
}

