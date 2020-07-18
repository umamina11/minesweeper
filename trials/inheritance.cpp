#include<iostream>
using namespace std;
class shape

{
	protected:
		int width;
		int height;
		public:
			void setwidth(int w)
			{
				width =w;
				
			}
			void setheight(int h)
			{
				height =h;
				
			}
};

class rectangle:public shape
{
	public:
		int getarea()
		{
			return (width*height);
		}
};
int main()
{
	rectangle r;
	r.setwidth(6);
	r.setheight(9);
	
	cout<<"area of rectangle"<<r.getarea()<<endl;
	
	return 0;
}
