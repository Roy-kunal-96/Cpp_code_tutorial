// Inheritance basics   ............private visiblity modes!!!!!!
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
class score :private student
{
	int marks;
	float per;
	public:
	int setData(int y,int p,int q)
	{
		marks=y;
		set_val(p,q);
	}
	float perCal()
	{
		return per=(float) marks/5;
	}
	void display()
	{
		show();
		cout<<"Marks Obtained: "<<marks<<endl<<"Percentage: "<<per<<"%"<<endl;
	
	}
};
int main()
{
	score s1;
	
	s1.setData(497,20,004);
	s1.perCal();
	//s1.show();
	s1.display();
	
	return (0);
}

