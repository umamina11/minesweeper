//write a macro that obtain the largest of three numbers
#include <iostream>
using namespace std;
#define LARGEST(a,b,c)(a>b)?((a>c)?a:c):((b>c)?b:c)
int main()
{
//	int LARGEST(int,int ,int);
	
	int a,b,c;
	cout<<"entre the three numbers"<<endl;
	cin>>a>>b>>c;
	int result;
	result=LARGEST(a,b,c);
	
	cout <<"largest number is"<<result<<endl;
//	getch();
	return 0;
}
