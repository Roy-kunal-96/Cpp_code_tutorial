// Use of initializer
#include<iostream>
using namespace std;

class A
{
	const int x;// const varible 
	int &y;
	public:
		A(int &m):x(5),y(m)
		{
		}
		void show()
		{
			cout<<"X:"<<x<<endl<<"Y:"<<y<<endl;
		}
};

int main()
{
	int n=6;
	A a(n);
	a.show();
	
	return (0);
}
