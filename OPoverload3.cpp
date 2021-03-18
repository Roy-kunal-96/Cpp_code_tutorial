// Operator overloading...........++(post and pre)
#include<iostream>
using namespace std;
class Integer
{
	int x;
	public:
		int set_val(int y)
		{
			x=y;
		}
		void put_val()
		{
			cout<<"X: "<<x<<endl;
		}
		Integer operator ++()                         //Preincrement
		{
			Integer temp;
			temp.x=++x;
			return (temp);
		}
		Integer operator ++(int)                      //Postincrement
		{
			Integer temp;
			temp.x=x++;
			return (temp);
		}
};
int main()
{
	Integer I1,I2,I3,I4;
	cout<<"*****POST***************"<<endl;
	I3.set_val(3);
	I3.put_val();
	I4=I3++;        //I4=I3.operator++(int);
	I3.put_val();
	I4.put_val();       //
	cout<<"*********PRE************"<<endl;
	I1.set_val(5);
	I1.put_val();
	I2=++I1;               // I2=I1.operator++()
	I1.put_val();
	I2.put_val();
}
