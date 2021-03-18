//parameterised constructor
#include<iostream>
using namespace std;
class Account
{
	
	int acc_no;
	float bal;
	public:
	
		Account(int x,float y)
		{
			acc_no=x;
			bal=y;
	    }
		int display()
		{
			cout<<"Account no: "<<acc_no<<endl;
			cout<<"Balance: "<<bal<<endl;
		}
};
int main()
{
	Account A1(100,12.96);
	A1.display();
	return 0;
}
