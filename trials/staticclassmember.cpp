//static class memebers
#include<iostream>
using namespace std;
class box
{
	public:
		static int objectcount;
//		int count;
		  box(double l = 2.00, double b = 2.00, double h = 2.00) 
		{
		
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         
        
         objectcount++;
         
    	}
    	
    	
      double Volume()
	   {
         return (length * breadth * height);
       }
      
   private:
      double length;     
      double breadth;    
      double height;     
};


int box::objectcount = 0;

int main()
 {
   box box1(4.4, 4.4, 4.4);    
   box box2(8.2, 8.2, 8.2);    

   
   cout << "Total box " << box::objectcount << endl;

   return 0;
 }

