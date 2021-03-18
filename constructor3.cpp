// constructor overloading
#include<iostream>
using namespace std;
class Account
{
	
	int acc_no;
	float bal;
	float roi;
	public:
	
		Account(int x,float y,float z)
		{
			acc_no=x;
			bal=y;
			roi=z;
	    }
	    Account(int x,float y)
		{
			acc_no=x;
			bal=y;
	    }
	    Account()
		{
			acc_no=0;
			bal=0;
			roi=0;
	    }
		int display()
		{
			cout<<"Account no: "<<acc_no<<endl;
			cout<<"Balance: "<<bal<<endl;
			cout<<"Rate of interest:"<<roi<<endl;		}
};
int main()
{
	cout<<"****************************"<<endl;
	Account A1(100,12.96);
	A1.display();
    cout<<"****************************"<<endl;
	Account A2(101,13.04,7.5);
	A2.display();
	cout<<"****************************"<<endl;
	Account A3;
	A3.display();
	cout<<"****************************"<<endl;
	
	return 0;
	
}

