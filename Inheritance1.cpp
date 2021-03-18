// Inheritance basics
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	protected:
	int roll_no;
	int stu_id;
	public:
		int set_val(int x,int n)
		{
			roll_no=x;
			stu_id=n;
		}
		void show()
		{
			cout<<"Roll no: "<<roll_no<<endl;
			cout<<"Student ID: "<<stu_id<<endl;
		}
};
class score :public student
{
	int marks;
	float per;
	public:
	int setData(int y)
	{
		marks=y;
	}
	float perCal()
	{
		return per= marks/5;
	}
	void display()
	{
		cout<<"Marks Obtained: "<<marks<<endl<<"Percentage: "<<per<<"%"<<endl;
	}
};
int main()
{
	score s1;
	s1.set_val(20,003);
	s1.setData(495);
	s1.perCal();
	s1.show();
	s1.display();
	
	return (0);
}

