// Abstract class Concept
#include<iostream>
using namespace std;
class A
{
	public:
	    virtual	int setData(int,int)=0;
		virtual void showData()=0;
};
class B :public A
{
	protected:
	int x,y;
	public:                      // pure virtual function need to defined or redeclare as pure virtual function in base classes.
			int setData(int p,int q)
			{
				x=p;
				y=q;
			}
			void display()
	         {
	         	cout<<"X: "<<x<<endl<<"Y: "<<y<<endl;
			 }
		   	void showData()=0;// Redeclared as pure virtual function 
};
class D :public B
{
	public:
			void showData()
			{
				cout<<"Chutiya na banao :"<<endl;
				cout<<"X: "<<x<<endl<<"Y: "<<y<<endl;
			}
};
int main()
{
/*	B b;                          // not possible cuz it asbstract class
	b.setData(7,8);
	b.display();*/
	D d;
	d.setData(7,8);
	d.showData();
	
	
	return (0);
}

