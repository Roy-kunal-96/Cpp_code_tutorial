// this is used to return a reference to calling object  
#include<iostream>
using namespace std;

class A
{
   int x;
   public:
      A(int x)
	  {
	      (*this).x=x;   //this->x=x;
	
	  }	
     A Greater(A a)
	 {
	 	if(x < a.x)
	 	return a;
		 else 
		 return *this; 
	 }
	 void display()
	 {
	 	cout<<"value of x:"<<x<<endl;
	 }
};
int main()
{
	A a1(7);
	a1.display();
	A a2(9);
	a2.display();
	A a3=a1.Greater(a2);
	cout<<"*************************"<<endl;
    a3.display();
	
	return(0);
}
