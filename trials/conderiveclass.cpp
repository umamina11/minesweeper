 //constrructor in derived class 
 #include<iostream>
 using namespace std;
 class alpha
 {
 	int x;
 	public:
 		alpha(int i)
 		{
 			x=i;
 			cout<<"alpha value"<<endl;
 			
		 }
		 void showx()
		 {
		 	cout<<"x= "<<x<<endl;
		 	
		 }
 };
 class beta
 {
 	float y;
 	public:
 		beta(float j)
 		{
 			y=j;
 			cout<<"beta value"<<endl;
		 }
		 void showy()
		 {
		 	cout<<"y= "<<y<<endl;
		 }
 };
 class gamma :public beta,public alpha
 {
 	int m,n;
 	public:
 		gamma(int a,float b,int c,int d):
 		alpha(a),beta(b)
 		{
 			m=c;
 			n=d;
 			cout<<"gamma value"<<endl;
 			
		 }
		 void showmn()
		 {
		 	cout<<"m= "<<m<<endl;
		 	cout<<"n= "<<n<<endl;
		 }
 };
 int main()
 {
 	gamma g(7,34.11,35,65);
 	cout<<endl;
 	g.showx();
 	g.showy();
 	g.showmn();
 	
 	return 0;
 }
