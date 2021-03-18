// this pointer : it is local object pointer in every instance member function (not static one) containing the address of calling object.
/*The keyword this identifies a special type of pointer. Suppose that you create an object named x of class A, and class A has a non-static member function f(). 
If you call the function x.f(), the keyword this in the body of f() stores the address of x    */
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		int set_val(int x)
		{
		     this->x=x;//(*this).x=x;
		}
	 	void show()
	 	{
	 		cout<<"Value of x: "<<this->x<<endl;
		 }
};
int main()
{
	A a;
	a.set_val(5);// It can interpreted as a.set_val(&a,5);
	a.show();
	
	return 0;
}

