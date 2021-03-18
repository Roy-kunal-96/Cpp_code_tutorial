//Exception Handling 
//Invoking function that generates exception;
#include<iostream>
using namespace std;
int fun(int a);

int main()
{
	int x;
	cout<<"Enter the positive number only :";
	cin>>x;
	try
	{
		fun(x);
		cout<<"Hey there! I'm positive"<<endl;
	}
	catch(int y)
	{
			cout<<"Exception caught:"<<endl;
		cout<<"Fuck off!! You enter negative number :("<<endl;
	
	}
	cout<<"End line :) ";
	return (0);
}

int fun(int a)
{
	if(a>0)
	 cout<<"A:"<<a<<endl;
    else
      throw a;
}
