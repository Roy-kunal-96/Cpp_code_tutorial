// A class can become a friend function of another class............friend fn is only granted not taken
#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public:
		int set_val(int p,int q)
		{
			x=p;
			y=q;
		}
		void show(B b);
	/*	{
			
		b.putData();
		cout<<"X: "<<x<<"  "<<"Y: "<<y<<endl;
		}*/
};
class B
{
	int z;
	int w;
	public:
		friend class A;
		int setData(int r,int s){ z=r, w=s	;}
		int putData()
		{
		 
		 cout<<"Z:"<<z<<endl<<"W:"<<w<<endl;
		 }
};
	void A:: show(B b)
		{
		
		b.putData();
		cout<<"X: "<<x<<"  "<<"Y: "<<y<<endl;
		
		}
int main()
{
	B b1;
	b1.setData(6,5);
	cout<<"b1.putData():"<<endl;
	b1.putData();
	A a;
	a.set_val(7,8);
	cout<<"a.show(b1):"<<endl;
	a.show(b1);
	
	return (0);
}
		
        	
