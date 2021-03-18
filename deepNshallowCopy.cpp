// Creating copy of An object
#include<iostream>
using namespace std;

class A
{
	int x,y;
	
	public:
	int setval(int m,int n)
	{
		x=m;
		y=n;
		
	 } 
	void show()
	{
		cout<<"X:"<<x<<endl<<"Y:"<<y<<endl;
	}
	
};

// Shallow copy
int main()
{
    A a1;
    a1.setval(5,6);
	a1.show();
	cout<<"Copy of object using Copy Constructor:"<<endl;
	A a2(a1);// copy constructor
	a2.show();
	cout<<"Copy of object using implicit copy assignment operator/operator overloading:"<<endl;
	A a3;
	a3=a1;
	a3.show();
	
	return(0);	
}
