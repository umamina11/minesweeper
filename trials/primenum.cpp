//Write a function isPrime that takes an integer as input, and return a bool 
//with value as true if the input number is a p
#include <iostream>
using namespace std;
inline bool isPrime(int num)


{
    bool flag=true;
    for(int i = 2; i <= num / 2; i++)
	{
       if(num % i == 0) 
	   {
          flag = false;
          break;
       }
    }
    return flag;
}
int main()
{
   int num;
   bool flag;
   cout<<"Enter a number "<<endl;
   cin>>num;
   flag = isPrime(num);
   if (flag==true)
      cout<<"this is a prime number"<<endl;
   else
      cout<<"this is not a prime number"<<endl;
   return 0;
}
