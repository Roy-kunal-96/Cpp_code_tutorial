// Operator Overloading using friend function
#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public:
		int set_val(int x,int y)
		{
			real=x;
			img=y;
		}
		void show()
		{
			cout<<real<<"+"<<img<<"j"<<endl;
		}
		friend complex operator+(complex,complex);
 };
 complex operator+(complex C1,complex C2)
 {
 	complex temp;
 	temp.real=C1.real+C2.real;
 	temp.img=C1.img+C2.img;
 	
 	return (temp);
 }
 int main()
 {
 	complex c1,c2,c3;
 	c1.set_val(4,5);
 	c1.show();
 	c2.set_val(3,2);
 	c2.show();
 	cout<<"-----------------"<<endl;
 	c3=operator+(c1,c2);
 	c3.show();
 	return 0;
 }
