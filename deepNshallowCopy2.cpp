// Deep copy and Shallow copy Concept
#include<iostream>
using namespace std;

class A
{
	int x,y;
	int *ptr;
	public:
		A()
	{
		ptr=new int;
	}
	A(A &a) // It is implicitly provided by compiler.....but in DEEP copying it must be called explicitly as we need to alter the defination  provided by compiler
	{
		x=a.x;
		y=a.y;
		ptr=new int;
		*ptr=*(a.ptr);
	}
	void setval(int p,int q,int r)
	{
		x=p;
		y=q;
		*ptr=r;
	 } 
	void show()
	{
		cout<<"X:"<<x<<endl<<"Y:"<<y<<endl;
		cout<<"Value in pointer:"<<*ptr<<endl;
		cout<<"Address pointed by ptr pointer:"<<ptr<<endl;
	}
   ~A() // Here no such thing like dangle
      {
  	       delete ptr;
       }
	
	
};

// Deep copy

// After copying object...... m/m resources are  shared b/w two different object.
// In other word m/m address pointed by ptr in different object are different!!!

int main()
{
    A a1;
    a1.setval(5,6,7);
	a1.show();
	A a2(a1);// copy constructor
	a2.show();
	
	
	return(0);	
}
