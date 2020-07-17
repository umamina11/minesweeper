//file handling
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ar[100];
	cout<<"give your introduction"<<endl;
	cin.getline(ar,100);
	
	int x;
	float y;
	
	ofstream myfile("xyz.txt",ios::app);
	

	
	myfile<<ar;
	myfile.close();
	cout<<"file write operation is succesful"<<endl;
	
	cout<<"reading from file "<<endl;
	char ar1[100];
	ifstream obj("xyz.txt");
	obj.getline(ar1,100);
	cout<<"array content:"<<ar1<<endl;
	cout<<"file reading completely"<<endl;
	obj.close();
	
	return 0;
}
