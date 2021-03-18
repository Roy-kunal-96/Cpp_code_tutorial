// static local variable
#include<iostream>
using namespace std;
void fun()
{
	int a;
	static int b=10;
	a++;
    b++;
	cout<<"a"<<a<<endl;
	cout<<"b"<<b<<endl;
}

int main()
{
	fun();
	fun();
	fun();
	fun();
	fun();
	fun();
	fun();
	
	return 0;
	
}
