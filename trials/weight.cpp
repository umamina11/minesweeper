#include<iostream>
using namespace std;
class weight
{
	int leter,ml;
	public:
		void getdata();
		void putdata();
		void sum_of_weight(weight,weight);
		
};
void weight::getdata()
{
	cout<<"in leter:"<<endl;
	cin>>leter;
	cout<<"in ml:"<<endl;
	cin>>ml;
}

void weight::putdata()
{
	cout<<leter<<"leter and"<<ml<<"ml"<<endl;
	
}

void weight::sum_of_weight(weight w1,weight w2)
{
	ml=w1.ml+w2.ml;
	leter=ml/1000;
	ml=ml%1000;
	leter+=w1.leter+w2.leter;
	
}
int main()
{
	weight w1,w2,w3;
	cout<<"entre the weight in leter and ml"<<endl;
	cout<<"entre the weight 1"<<endl;
	w1.getdata();
	cout<<"entre the weight 2"<<endl;
	w2.getdata();
	//sum_of_weight(w1,w2);
	cout<<"total weight=";
	w3.putdata();
	return 0;
	
}
