#include<iostream> 
using namespace std;
 #include<conio.h>
 #include<time.h>
 #include<cstdlib>
  class matrix 
  {
   int m[3][3];
    public: 
	void getdata()
	 {
	  cout<<"enter matrix elements for 3x3 matrix=\n";
	   for(int i=0;i<3;i++) 
	   {
	    for(int j=0;j<3;j++) 
		{ 
		cin>>m[i][j];
		 
		}
		  
	}
		   
} 
		   void showdata()
 {
 cout<<"element of matrix=\n";
 for(int i=0;i<3;i++) 
{
 for(int j=0;j<3;j++) 
{
 cout<<m[i][j]<<"\t"; 
 
} 
cout<<"\n"; 
} 
} 
void randommatrix(matrix m);


};
void matrix::randommatrix(matrix x) 
{
	int m[3][3];
	srand(time(0));
	 for(int i=0;i<3;i++) 
{ 
for(int j=0;j<3;j++) 
{
 
		m[3][3]=rand();
		
}
}
 
 for(int i=0;i<3;i++) 
{
 for(int j=0;j<3;j++) 
{
 cout<<m[i][j]<<"\t";
 }
 cout<<"\n"; 
} 

 } 
int main()
 {
 matrix a,b;
 a.getdata();
 
 a.showdata(); 
 
getch();
return 0;
}

