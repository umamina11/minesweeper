//virtual base class 
#include<iostream>
using namespace std;
class student
{
	protected:
		int rollnum;
		public:
			void getnum(int a)
			{
				rollnum=a;
				
			}
			void putnum()
			{
				cout<<"roll number"<<rollnum<<endl;
				
			}
};

class test:virtual public student
{
	protected:
		float p1,p2;
		public:
			void getmarks(float x,float y)
			{
				p1=x;
				p2=y;
				
			}
			void putmarks()
			{
				cout<<"marks obtained"<<endl;
				cout<<"marks in part1: "<<p1<<endl;
				cout<<"marks in part2:  "<<p2<<endl;
			}
			
};
class sports:public virtual student
{
	protected:
		float score;
		public:
			void getscore(float s)
			{
				score =s;
				
			}
			void putscore()
			{
				cout<<"sports wt: "<<score<<endl;
				
			}
};
class result :public test ,public sports
{
	float total;
	public:
		void display();
		
};
void result::display()
{
	total=p1+p2+score;
	putnum();
	putmarks();
	putscore();
	 
	 
	 cout<<"total score: "<<total<<endl;
	 
}
int main()
{
	result student1;
	student1.getnum(478);
	student1.getmarks(30.4,29.5);
	student1.getscore(60);
	student1.display();
	
	return 0;
	
}
