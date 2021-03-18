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
	
	
	A(A &a) // It is implicitly provided by compiler.....
	{
		x=a.x;
		y=a.y;
		ptr=a.ptr;
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
	// Dymanically allocated m/m need to deleted explicitly
	// Object get destructed implicitly
	//Here if one object get destructed then the ptr in other object pointing to same m/m address dangles (point to unknow m/m adress)..led to crash of program
  ~A() 
  {
  	delete ptr;
  }
	
	
};

// Shallow copy

// After copying object...... m/m resources are shared b/w two different object.
// In laymen term... the pointer (ptr) in both object after copying point to same m/m location........hence object cant work independently
// Change made in bring abt the change in other as well!!
int main()
{
    A a1;
    a1.setval(5,6,7);
	a1.show();
	A a2(a1);// copy constructor
	a2.show();


	
	
	return(0);	
}
