//Type Conversion
//class type to primitive type
//using casting Operator
#include<iostream>
using namespace std;
class complex
{
	float real,img;
	public:
		void setData(float x,float y)
		{
			real=x;
			img=y;
		}
		void showData()
		{
			cout<<"Real part :"<<real<<endl<<"Img part :"<<img<<endl;
			
		}
		// cating operator
		operator float()
		{
			return(real+img);
		}
};

int main()
{
	complex c;
	c.setData(2.4,3.8);
	c.showData();
	float flt;
	flt=c; // Interpreted as x=c.operator float()......but not the right syntex
	cout<<"Value in flt:"<<flt<<endl;
	
	return (0);
}
