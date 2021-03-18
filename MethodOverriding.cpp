// Method overriding concept
//An overridden method is called according to the object invoking it, not according to the reference type
#include<iostream>
using namespace std;
class student
{
	protected:
	int marks ;
	public:
		int setData(int x)
		{
			this->marks=x;
		}
		void show()
		{
			cout<<"MARKS: "<<marks<<endl;
		}
};
class sports :public student
{
	public:
		int setData(int x)            // method overridding.......must have same prototype in base and derive class
		{
			marks=x+5;
		}
		void show()
		{
			cout<<"MARKS after adding sports marks : "<<marks<<endl;
		}
};

int main()
{
	sports s1;
	//early binding or compile time polymorphisms
	s1.setData(491);
	s1.show();
	
	//method to call nullify overriding
	sports s2;
	s2.student::setData(492);
	s2.student::show();
	
	return (0);
}

