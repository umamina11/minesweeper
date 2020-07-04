//multiplication of matrix using classes
#include<iostream>
using namespace std;
#include<conio.h>
class matrix
{
	int a[10][10],b[10][10],c[10][10];
	int x,y;
	public:
		int i,j;
		void values();
		void multi();
		
};
void matrix::values()
{
	cout<<"entre the rows ";
	cin>>x;
	cout<<"entre the columns  ";
	cin>>y;
	cout<<"entre the elements of matrix"<<endl;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"entre the elements of second matrix"<<endl;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		{
			cin>>b[i][j];
		}
	}
}
void matrix::multi()
{
	cout<<"multiplication of 2 matrices"<<endl;
	 for(i = 1; i <=x; i++)
        for(j = 1; j <=y; j++)
        {
            c[i][j]=0;
        }
	for(i = 1; i <=x; i++)
        for(j = 1; j <=y; j++)
            for(int k = 1; k <=y; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }

  
    cout << endl << "final result " << endl;
    for(i = 1; i <=x; i++)
    for(j = 1; j <=y; j++)
    {
        cout << " " << c[i][j];

            cout << endl;
    }
}
int main()
{
	matrix M;
	M.values();
	M.multi();
	

	return 0;
	
}
