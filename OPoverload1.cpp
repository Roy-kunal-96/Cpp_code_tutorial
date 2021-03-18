// Operator overloading..........Binary operator
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
		  void display()
		  {
		  	cout<<"complex no: "<<real<<" + j"<<img<<endl;
		  }
		complex operator +(complex c)//  complex add(complex c)
		  {                                                     
		  	complex temp;
		  	temp.real=real+c.real;
		  	temp.img=img+c.img;
		  	return (temp);
		  }
};
int main()
{
	complex c1,c2,c3;
	c1.set_val(5,4);
	c1.display();
	c2.set_val(6,7);
	c2.display();
	c3=c1+c2;        //c3=c1.operator +(c2)=c3=c1+c2;              //c3=c1.add(c2);
	c3.display();
	return 0;
}
