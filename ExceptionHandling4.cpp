//Exception handling
//Multiple catch statement
#include<iostream>
using namespace std;
void root(int a,int b,int c)
{
	int D=b*b-4*a*c;
	if(D==0)
	  throw 1;
	else if(D>0)
	  throw 1.0;
	else
	 throw '1';
	 
}
int main()
{
	int x,y,z;
	cout<<"Enter the cofficient of Equation: "<<endl;
	cout<<"X:";
	cin>>x;
	cout<<"Y:";
	cin>>y;
	cout<<"Z:";
	cin>>z;
	try
	{
	    cout<<"Let's fucked it upp!"<<endl;		
		root(x,y,z);
		cout<<"We are try block"<<endl;
	}

	catch(...)
	{
	  cout<<"Exception caught:"<<endl;
	 	
	}

	
	cout<<"Get the fuck out of here!!:)"<<endl;
}
