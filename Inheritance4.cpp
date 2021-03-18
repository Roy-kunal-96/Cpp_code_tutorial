// Constructor in derived class
#include<iostream>
using namespace std;
class base
{
	int i;
	public:
		base(int x) 
		{
			i=x;
		} 
		void show()
		{
			cout<<"Value of i: "<<i<<endl;	
		}
};
class derived :private base
{
	int j;
	public:
		derived(int x,int y):base(x)    //This is mendatory
		 {
		        j=y;	
		 } 
		void display()
		{
			show();
			cout<<"Value of j: "<<j<<endl;
		}
};

int main()
{
	derived d(4,5);
	d.display();
	
	return (0);
}
