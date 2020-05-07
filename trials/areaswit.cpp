//calculating area switch case
#include<iostream>
using namespace std;
int main()
{
	int ch;
	float l,b,r,a;
	cout<< "1 square"<<endl;
	cout<<"2 rectangle"<<endl;
	cout<<"3 circle"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:{
				cout << "entre the length"<<endl;
				cin>>l;
				a=l*l;
				
				break;
				}
		case 2:{
				cout <<"entre length and breadth"<<endl;
				cin>>l>>b;
				a=l*b;
				break;
				}
		case 3:{
				cout<<"entre the radius"<<endl;
				cin>>r;
				a=3.14*r*r;
				break;
				}
				default:cout<<"invalid choice"<<endl;
				break;
		
	}
	cout <<"area is:"<<a<<endl;
	return 0;
}
	

