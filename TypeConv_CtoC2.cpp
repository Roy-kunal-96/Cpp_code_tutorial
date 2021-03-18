// Type Conversion(one class to another)
// Using casting operator
#include<iostream>
using namespace std;

class B
{
   int m,n;
   public:
   	  friend class A;// friend class
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

class A
{
   int x,y;
   public:
      void setData(int p,int q)
	  {
	  	x=p;
	  	y=q;
	  }	
      void showData()
	
      {
		cout<<"X:"<<x<<endl<<"Y:"<<y<<endl;
	  }
   	  operator B()// casting operator
      {
   		B temp;
   		temp.m=x;
   		temp.n=y;
   		return temp;
	   }
};




int main()
{
	A a1;// call B();
	a1.setData(3,4);
	a1.showData();
	cout<<"Type conversion from one Class to another Class using casting operator:   "<<endl;
	B b1;
    b1=a1;  
	b1.showVal();
	
	return (0);
	
}
