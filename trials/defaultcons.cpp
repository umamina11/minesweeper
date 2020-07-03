//default constructor
#include<iostream>
using namespace std;
class cars
{
	string compname;
	string modelname;
	float milage;
	double price;
	public:
		cars()
		{
			cout<<"default constructor"<<endl;
			
		}
		void setdata(string cname,string mname,float m,double p)
		{
			compname=cname;
			modelname=mname;
			milage=m;
			price=p;
		}
		void displaydata()
		{
			cout<<"car properties"<<endl;
			cout<<"car company name"<<compname<<endl;
			cout<<"car company model"<<modelname<<endl;
			cout<<"car milage"<<milage<<endl;
			cout<<"car price"<<price<<endl;
		}
};
int main()
{
	cars car1;
//	car1.setdata("jaguarXF","jaguar",//15.5,10000000);
//	car1.displaydata();
	
	return 0;
}
