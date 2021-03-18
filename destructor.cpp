// Destructor concept
#include<iostream>
using namespace std;
class Account
{
	static int count1;
	
	int acc_no;
	int bal;
	public:
	Account ()
	{
		cout<<"Object Created: "<<count1<<endl;
		count1++;
	}
	~Account()
	{
		cout<<"Object Destructed:  "<<endl;
		
	}
};
int Account:: count1=0;

	int fun()
	{
		Account A;
	}
	
	int main()
	{
		Account A1;
		cout<<"************************"<<endl;
		fun();
	    cout<<"************************"<<endl;
		
		return 0;
	}
