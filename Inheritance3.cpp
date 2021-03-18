// Constructor in derived class
#include<iostream>
using namespace std;
class base
{
	int i;
	public:
	//	base() {} The compiler will provide default constructor in both base and derive class either implicitly or explictly!!!
		void show()
		{
			cout<<"Value of i: "<<i<<endl;	
		}
};
class derived :private base
{
	int j;
	public:
		//derived():base() {}........ no need of this even if there is explicit defalt constructor
		void display()
		{
			show();
			cout<<"Value of j: "<<j<<endl;
		}
};

int main()
{
	derived d;
	d.display();
	
	return (0);
}
