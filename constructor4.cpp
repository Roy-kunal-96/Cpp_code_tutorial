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
		cout<<"BALANCE:"<<bal<<endl;
	}
};
int main()
{
	Account A1;
	A1.display();
	Account A2(A1);
	A2.display();
	
	return 0;
}
