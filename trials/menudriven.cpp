//menu driven program performing different arthematic operation
#include<iostream>
using namespace std;
int main()
{
	 int option_no;
	cout<<"performing differnt arthematic operation "<<endl;

	
	cout<<"1 addition"<<endl<<" 2 substraction"<<endl<<"3 multiplication"<<endl<<" 4 division"<<endl;
		cout<<"entre your option number"<<endl;
	cin>>option_no;
	
	 int  x,y;
	switch(option_no)
	{
		case 1: cout<<"Addition"<<endl;
				cout<<"enter two numbers"<<endl;
				cin>>x>>y;
				cout<<"solution"<<(x+y);
				break;
				
		case 2:cout<<"subtraction"<<endl;
				cout<<"enter two numbers"<<endl;
				cin>>x>>y;
				cout<<"solution "<<(x-y);
				break;
			
		case 3:cout<<"multiplication"<<endl;
				cout<<"entre the two numbers"<<endl;
				cin>>x>>y;
				cout<<"solution"<<(x*y);
				break;
				
		case 4:cout<<"division"<<endl;
				cout<<"enter two numbers"<<endl;
				cin>>x>>y;
				cout<<"solution"<<(x/y);
				break;
				
		default:cout<<"entre correct option"<<endl;
	}
	 
	 return 0;
}
