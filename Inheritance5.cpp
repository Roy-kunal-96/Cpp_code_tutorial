// Constructor in derived class......MULTIPLE INHERITANCE
#include<iostream>
using namespace std;
class A // Base class 1
{
int x;
public:
	A(int a)
	{
		x=a;
	}
	void show1()
	{
		cout<<"Value of X: "<<x<<endl;
	}
};
class B  //Base class 2
{
	int y;
	public:
		B(int b)
		{
			y=b;
		}
		void show2()
     	{
		    cout<<"Value of Y: "<<y<<endl;
	    }
		
		
};
class derived: private A ,private B
{
	int z;
	public:
	  derived(int a,int b,int c):A(a),B(b)// Base class const. cant be inherited but it can be called by derive class.
	  {
	  	z=c;
	  }
	  void show3()
	{
		cout<<"Value of Z: "<<z<<endl;
		show1();
		show2();
	}
};

int main()
{
	derived d(7,8,9);
	d.show3();
//	d.show2();
//	d.show1();
	
	return (0);
	
}
