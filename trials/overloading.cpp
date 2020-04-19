#include<iostream> 
using namespace std;
 #include<conio.h> 
class matrix
 {
 int m[3][3];
 public: void getdata()
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
void operator+(matrix m); 
};
 void matrix::operator+(matrix x) 
{
 int M[3][3];
 for(int i=0;i<3;i++) 
{ 
for(int j=0;j<3;j++) 
{
 M[i][j]=m[i][j]+x.m[i][j];
 } 
}
 cout<<"addition of matrix is=\n";
 for(int i=0;i<3;i++) 
{
 for(int j=0;j<3;j++) 
{
 cout<<M[i][j]<<"\t";
 }
 cout<<"\n"; 
} 
 
}
 int main()
 {
 matrix a,b;
 a.getdata();
 b.getdata();
 a.showdata(); 
b.showdata(); 
a+b;
 getch(); 
return(0);
 }

