
#include<iostream>
using namespace std;
 
class factorial{
    int f, n;
    public:
    void fact();
    void display();
};
 
void factorial::fact()
{
    f=1;
    cout<<"\nEnter a Number:";
    cin>>n;
    for(int i=1;i<=n;i++)
        f=f*i;
}
 
void factorial::display()
{
    cout<<"\nFactorial of "<<n<<" is "<<f;
}
 
int main()
{
   
    factorial ob;
    ob.fact();
    ob.display();
 return 0;
}
