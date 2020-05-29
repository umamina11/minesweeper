//friend function
#include<iostream>
using namespace std;
class trial
{
	int a;
	int b;
	public:
		void value()
		{
			cout<<"value of a"<<endl;
			cin>>a;
			cout<<"value of b"<<endl;
			cin>>b;
		}
		friend float mean(trial t);
};
float mean (trial t)
{
	return float(t.a+t.b)/2;
}
int main()
{
	trial x;
	x.value();
	cout<<"the mean value is"<<mean(x)<<endl;
	return 0;
}
