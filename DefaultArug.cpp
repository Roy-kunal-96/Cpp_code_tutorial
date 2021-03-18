// Deault Argument
// If function uses default arguments then default arguments can’t be written in both function declaration & definition.
// It should only be in declaration, not in definition.
#include<iostream>
using namespace std;
int add(int ,int ,int = 0);    // variable name optional in prototype
int main()
{
	int x,y;
	//three argument passed
	x=add(3,4,7);
	cout<<"sum1: "<<x<<endl;
	
	//two argument passed!!!!!
	y=add(8,9);
	cout<<"sum2: "<<y<<endl;
	return(0);
}
int add(int a,int b,int c )
{
	int temp;
	temp=a+b;
	temp=temp+c;
	return temp;
}

