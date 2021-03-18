#include<iostream>
using namespace std;
 class Base
 {
    protected:
	   int a;
	public:
	    Base()
	    {
	    	cout<<"I'm in Base class"<<endl;
	    	fun1();
		}
	    virtual	void fun1()
		{
			cout<<"I'm in base fun1()"<<endl;
		}	
			
 };
 class Derived :public Base
 {
    int b;
	public:
	    Derived()
		{
		 cout<<"I'm in Derived class"<<endl;
		 fun1();	
		 } 
	    
	    void fun1()
		{
			cout<<"I'm in derived fun1()"<<endl;
		}	
	
			
 };
 int main()
 {
 	Base *ptr;
 	Derived d;
 	cout<<"************************************************"<<endl;
 	ptr=&d;
 	ptr->fun1();
 }
