//Copy constructor.............
#include<iostream>
using namespace std;
class Account
{
	int acc_no;
	int bal;
	public:
	void display()
	{
		cout<<"ACCOUNT NO.:"<<acc_no<<endl;
		cout<<"BALANCE:    "<<bal<<endl;
	}
	
	Account(Account &A)// Reference to same class to avoid recursion
	{
		acc_no=A.acc_no;
		bal=A.bal;
	}
   Account()// Default constructor need to created explicitly when copy constructor is created explicitly.......................
	{
		acc_no=100;
		bal=200;
	}
};
int main()
{
	Account A1;
	A1.display();
	cout<<"**********************************************"<<endl;
	Account A2(A1);
	A2.display();
	
	return 0;
}
