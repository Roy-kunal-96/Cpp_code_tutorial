// Friend function basics
#include<iostream>
using namespace std;
class Account
{
  int acc_bal;
  float rate;
  public:
     int set_val(int x,float y)
	 {
	      acc_bal=x;
		  rate=y; 	
	 }	
	 void showData()
	 {
	 	cout<<"ACCOUNT BALANCE: "<<acc_bal<<endl<<"RATE:  "<<rate<<endl;
	 }
	 friend float IntOFyr(Account);   // only declaration with keyword friend
};

float IntOFyr(Account A)          // defined without membership label
{
	return A.acc_bal*A.rate/100; // access the data member but not directly but making object of the class
}
int main()
{
	float total;
	Account Ac;
	Ac.set_val(20,5.45);
	Ac.showData();
	total=IntOFyr(Ac);          //No calling object
	cout<<"TOTAL AMOUNT: "<<total<<endl;
	return (0);
}
