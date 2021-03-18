//Concept of virtual function
#include<iostream>
using namespace std;
class A
{
	public:
	   virtual	void show()  // to achieve late binding or runtime polymorphisms!!!!
		{
			cout<<"Base class show() "<<endl;
		}
	
};
class B :public A
{
	public:
		void show()
		{
			cout<<"Child class show() "<<endl;
		}
};

int main()
{
	// early binding is reason behind this....... base class show() is invoked irrespective of fact that base class pointer contain address of different classes
	//in different call
	// this can avoided using virtual keyword in base class!
	A *ptr;
	B b;
	ptr=&b;  // ptr refers to child class 
	ptr->show();
	
	A a;
	ptr=&a;  // ptr refers to base class
	ptr->show();
}

