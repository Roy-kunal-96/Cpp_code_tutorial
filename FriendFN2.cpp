// A friend function can be friend to one or more class!!
#include<iostream>
using namespace std;
class B;
class A
{
	int p;
	public:
		A(int x):p(x){}
		friend int Add(A,B);
};
class B
{
	int q;
	public:
		B(int y):q(y){}
		friend int Add(A,B);
};
int Add(A a,B b)
{
	return a.p+b.q;
}
int main()
{
	A a1(5);
	B b1(6);
	cout<<"SUM :"<<Add(a1,b1)<<endl;
	
	return (0);
}
