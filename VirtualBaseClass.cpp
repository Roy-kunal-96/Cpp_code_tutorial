// Virtual base class (multipath inheritance)
/*                      sports<--student-->test 
                       |________  _   ________|
								  | 					 
								result                        */
#include<iostream>
using namespace std;

class student // Base class
{
	protected :
		int roll_no;
	public:
		int setData(int x)
		{
			this->roll_no=x;
		}
		void showData()
		{
			cout<<"ROLL NO. : "<<roll_no<<endl;
		}
};
class test :public virtual student // Parent 1
{
	protected:
	      int marks;
	public:
	       int setMarks(int y)
		   {
		       marks=y;	
		   }      
	       void showMarks()
	       {
	       	cout<<"MARKS IN TEST: "<<marks<<endl;
		   }
};
class sports :virtual public student  // Parents 2
{
	protected:
		int s_score;
		public:
			int setScore(int z)
			{
				s_score=z;
			}
			void showScore()
			{
				cout<<"SPORTS SCORE: "<<s_score<<endl;
			}
};

class result :public test,public sports
{
	protected:
	   int totalmarks;
	public:
		int totalMarks()
		{
			totalmarks=marks+s_score;
		}
		void showTotal()
		{
			cout<<"RESULT :"<<totalmarks<<endl;
		}
};


int main()
{
	result s1;
	cout<<"STUDENT DATA:        "<<endl;
	s1.setData(21);
	s1.showData();
	s1.setMarks(789);
	s1.showMarks();
	s1.setScore(139);
	s1.showScore();
	s1.totalMarks();
	s1.showTotal();
	
	return (0);
}
