// Type Conversion
#include<iostream>
using namespace std;

class B;
class A
{
   int x,y;
   public:
   	friend class B;
      void setData(int p,int q)
	  {
	  	x=p;
	  	y=q;
	  }	
	void showData()
	
	{
		cout<<"X:"<<x<<endl<<"Y:"<<y<<endl;
	}
};
class B
{
   int m,n;
   public:
   	B() {} // this is mandatory here!
   	B(A &a)
   	{
   	  m=a.x;
	  n=a.y;	
   		
	}
      void setVal(int r,int s)
	  {
	         m=r;
			 n=s; 	
	  }	
	  void showVal()
	  {
	  	cout<<"M:"<<m<<endl<<"N:"<<n<<endl;
	  }
};

int main()
{
	A a1;// call B();
	a1.setData(3,4);
	a1.showData();
	cout<<"Type conversion from one Class to another Class:   "<<endl;
	B b1;
    b1=a1;  //b1.B(a1); call B(A &a)
	b1.showVal();
	
	return (0);
	
}
