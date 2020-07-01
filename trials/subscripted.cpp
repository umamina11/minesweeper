//overloading the subscripted operator
#include<iostream>
using namespace std;

class arr
{
	int a[5];
	
	
	public:
		
		arr(int *s)
		{
			int i;
			for(i=0;i<5;i++)
			a[i]=s[i];
			
		}
		int operator [] (int k)
		{
			return a[k];
		}
};
int main()
{
	int x[5]={2,6,5,7,1};
	arr A(x);
	int i;
	for (i=0;i<5;i++)
	{
		cout<<x[i]<<endl;
		
	 } 
//	 getch();
	 return 0;
}

