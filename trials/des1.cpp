#include<iostream>
using namespace std;
class des
{
	public:
		des(int x)
		{
			cout<<"example"<<endl;
			cout<<"start value "<<x<<endl;
		}
		~des()
		{
			cout<<"destructor destroys previous value"<<endl;
		}
};
int main()
{
	des d1(9);
	
	return 0;
}
