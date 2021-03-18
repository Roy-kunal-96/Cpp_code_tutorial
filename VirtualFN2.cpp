//
#include<iostream>
using namespace std;
 class Base
 {
    protected:
	   int a;
	public:
	   // Base(int x):a(x)  {}
	    virtual	void fun1()
		{
			cout<<"I'm in base fun1()"<<endl;
		}	
		void fun2()
		{
			cout<<"I'm in base fun2()"<<endl;
		}	
 };
 class Derived :public Base
 {
    int b;
	public:
	    Derived(int y)
		{
		b=y;	
		 } 
	    
	    void fun1()
		{
			cout<<"I'm in derived fun1()"<<endl;
		}	
		void fun2()
		{
			cout<<"I'm in derived fun2()"<<endl;
		}
			
 };
 
 int main()
 {
 	Base *ptr;
 	Derived d(4);
 	ptr=&d;
 	ptr->fun1();
 	ptr->fun2();// EARLY BINDING
 	return (0);
 	
 }
