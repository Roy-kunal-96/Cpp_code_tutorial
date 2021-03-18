// >> and << operator overloading using friend function
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
			cout<<"*************************"<<endl;
			cout<<"REAl: "<<real<<endl<<"IMG: "<<img<<endl;
			cout<<"*************************"<<endl;
		}
	   friend ostream& operator <<(ostream&,complex);	// we cant make object of ostream class hence an reference;
};
ostream& operator <<(ostream& os, complex c)
{
	os<<"REAL PART: "<<c.real<<endl<<"IMG PART: "<<c.img<<endl;
	return os;
}
int main()
{
	complex c1;
	c1.set_val(3,4);
	c1.show();
	cout<<c1;    // cout.operator <<(a)-------->not possible as mem fn class A.....but as friend fn......//operator<<(cout,a)
	             // cout an object of class ostream and >> mem fn of that class with different version
	
	return (0);
}
