//hybrid inheritance
#include<iostream>
using namespace std;

class base
{
	protected:
		int val;
};

class derive1 :public base
{
	public:
		derive1()
		{
			val=2;
		}
};
class derive2:public base
{
	public:
		derive2()
		{
		
		val=4;
		}
	void getvalue()
	{
		cout<<"derive2 valur of datamember"<<val;
	}
};

class derive3: public derive1,public derive2
{
	public:
		void getvalue()
		{
			cout<<"interger value is"<<endl;
			derive2::getvalue();
		}
};

int main()
{
	derive3 obj;
	obj.getvalue();
	
	return 0;
}
