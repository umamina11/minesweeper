//Write a function average, that takes an array of integers as input,
// and returns average value back.
#include<iostream>
using namespace std;
class avgsolution
{
	public:
		

inline int avg()
{
	int n ,i;
	int num[i],sum;float average;
	 cout<<"entre the numbers"<<endl;
	 cin>>n;
	 for(int i=1;i<=n;++i)
	 {
	 
	 cout<<"entre the elements"<<endl;
	 cin>>num[i];
	 sum=sum+num[i];
	}
//	 cout << "average of a number is :"<<endl;
	 average=sum/n;
	 cout <<"average of a number"<<average;
	 
return 0;
}
};
int main()
{
	int average;
	avgsolution av;
	av.avg();
	return average;
}
