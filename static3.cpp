#include<iostream>
using namespace std;
class Account
{
	float bal;// instance variable
    static float RoI;// class variable
	public:
	int get_val(float x)
	{
		bal=x;
	}
	void put_val(){cout<<"BALANCE: "<<bal<<endl; cout<<"Rate of interest: "<<RoI<<endl;}
	float intOFyr()
	{
		return bal*0.0795;
		
	}
	static setROI(float y)
	{
		RoI=y;
	}
};
float Account:: RoI;// static variable defination........memory allocated after this!!
int main()
{
	Account:: setROI(9.65); 
	Account A1,A2;
	A1.get_val(12.96);
	A1.put_val();
	cout<<"interest per year:"<<A1.intOFyr()<<endl;
	
	return 0;
	
}
