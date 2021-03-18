//Dynamic constructor
#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int p;
	int *ptr;
	public:
		A()
		{
			p=0;
			ptr=new int;
		}
		void setData(int x,int y)
		{
			p=x;
			*ptr=y;
		}
		void showData()
		{
			cout<<"P:="<<p<<endl;
			cout<<"*PTR:="<<*ptr<<endl;
			cout<<"Address of ptr: ="<<ptr<<endl;
		}
};

int main()
{
	A a;
	a.setData(4,5);
	a.showData();
	
	
	return (0);
}
