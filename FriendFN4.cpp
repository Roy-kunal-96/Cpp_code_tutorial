// uranary operator using friend function
#include<iostream>
using namespace std;
class Integer
{
	int x;
	public:
		int set_val(int a)
		{
			x=a;
		}
		void show()
		{
			cout<<"X: "<<x<<endl;
		}
		friend Integer operator++(Integer i);
};
Integer operator++(Integer i)
{
	Integer temp;
	temp.x=++i.x;
	return temp;
}
int main()
{
	Integer I1,I2;
	I1.set_val(6);
	I1.show();
	I2=operator++(I1);

	I2.show();
	I1.show(); // output remain 6
	
	return (0);
}
