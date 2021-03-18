//Exception handling
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the number to be divided: "<<endl;
	cin>>a;
	cin>>b;
	try
	{
		if(b!=0)
		 cout<<"Result :"<<a/b<<endl;
		
		 else
		  throw b;
		  cout<<"In try block"<<endl;
	}
	// catch statement immediately after try block
	//if object thrown matches the type of argument of catch statement,it is excuted
	//Else abort() function is invoked by default to abort the function
	
	catch(int b)              //    catch(double b) here abort is called invoked
	{
		cout<<"Exception cautght : divide by zero"<<endl;
	}
}
