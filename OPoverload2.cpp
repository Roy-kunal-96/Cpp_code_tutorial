// Operator overloading
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
		  	cout<<"complex no: "<<real<<" + "<<img<<"j"<<endl;
		  }
		complex operator -()
		  {                                                     
		  	complex temp;
		  	temp.real=-real;
		  	temp.img=-img;
		  	return (temp);
		  	
		  }
};
int main()
{
	complex c1,c2;
	c1.set_val(5,6);
	c1.display();
	c2=-c1  ;                  //c2=c1.operator-();
	c2.display();
	return 0;
}
