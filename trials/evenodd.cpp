// Write a function oddOrEven that takes an integer as input, and prints odd 
//or even depending on if input is odd vs even number.
# include<iostream>
using namespace std;
bool eveodd(int num);
int main()
{
	int num;
	bool iseven;
	cout<<"enter the number"<<endl;
	cin>>num;
	iseven=eveodd(num);
	if(iseven)
		cout <<"this number is even"<<endl;
	else
		cout <<"this number is odd"<<endl;
	
	return 0;
}
bool eveodd(int num)
{
	bool b;
	if (num%2==0)
		b=true;
	else
		b=false;
		
	return b;
}

