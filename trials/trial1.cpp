#include<stdlib.h>
#include <conio.h>
#include<iostream>
#include<time.h>
 using namespace std;
void generatematrix()
{
	int a[100][100];
	int r,c,n;
	int count =0;
	cout<<"entre the dimension of matrix"<<endl;
	cin>>r>>c>>n;
	srand(time(0));
		for (int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				a[i][j]=rand()%2;
	    	
				cout<<a[i][j]<<",";
				if (a[i][j]==1)
					count++;
			}
			cout<<endl;
		}
		cout<<"number of mines"<<count;
		
}
int main()
{
	cout<<"given matrix:"<<endl;
	generatematrix();
	return 0;
}

