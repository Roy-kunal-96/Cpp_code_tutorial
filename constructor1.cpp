// construction is invoked implicitly when an object is created
#include<iostream>
using namespace std;
class Account
{
	
	int acc_no;
	float bal;
	public:
		// explict defalut constructor.........compiler invokes implict default constructor when an object is created!!!!
	/*	Account()
		{
		}*/
		int display()
		{
			cout<<"Account no: "<<acc_no<<endl;
			cout<<"Balance: "<<bal<<endl;
		}
};
int main()
{
	Account A1;
	A1.display();
	
	return 0;
	
}
