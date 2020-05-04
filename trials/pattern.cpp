//creating number pattern 
#include<iostream >
using namespace std;
class pattern
{
	int n,num;
	public:
		void getdata ();
		void numpat();
		void display();
		
};
void pattern::getdata()
{
	cout<< "entre number of rows"<<endl;
	cin>>n;
}
void pattern::numpat() 
{ 

    int num = 1; 

    for (int i = 0; i < n; i++)
	{ 
  		for (int j = 0; j <= i; j++) 
            cout << num << " "; 
  
       
        num = num + 1; 
  
    
        cout << endl; 
    } 
} 
void pattern::display()
{
	cout<<"entre the number of rows"<<n<<endl;
	cout<< "the given pattern:"<<endl;
}

int main() 
{ 
	pattern p;
	p.getdata();
	p.numpat();
	p.display();
    return 0; 
} 
