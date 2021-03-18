// Member function of a class can become a friend function of another class
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
		void show()
		{
			cout<<"X:"<<x<<endl<<"Y:"<<y<<endl;
		}
		int max(B& b);
	/*	{
			B temp;
			return b.z>b.w?b.z:b.w;
		}*/
		
};


		
class B
{
	int z;
	int w;
	public:
		int setData(int r,int s){ z=r, w=s	;}
		int putData(){ cout<<"Z:"<<z<<endl;}
		friend int A:: max(B& b);
        	
};
	int A:: max(B& b)
		{
			return b.z>b.w?b.z:b.w;
		}

int main()
{
    B b1;
    b1.setData(6,5);
    A a;
    
	cout<<"MAX : "<<a.max(b1)<<endl;
	//cout<<"MAX : "<<b.max(5,6)<<endl;
	
	return (0);

	
}
