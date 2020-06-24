//copy constructor

#include<iostream> 
using namespace std; 

class Coordinate 
{ 
  
    int x_cor, y_cor; 

  public: 

 
    Coordinate(int x, int y) 
    	{ 
    	  	x_cor = x;
      		y_cor = y;
    	} 

	
	Coordinate(const Coordinate &cor) 
	  	{
    
		    x_cor = cor.x_cor;
		    y_cor = cor.y_cor;
 	 	} 

	int get_x_cor()
	{
    	return x_cor; 
    }
  	

	int get_y_cor()
	{
    	return y_cor; 
    }
}; 

int main() 
{ 
  
	Coordinate cor1(12,34); 

 
	Coordinate cor2 = cor1; 


	cout << "cor1 = (" << cor1.get_x_cor() << "," << cor1.get_y_cor() << ")" << endl; 
	cout << "cor2 = (" << cor2.get_x_cor() << "," << cor2.get_y_cor() << ")" << endl; 
	

	return 0; 
}

