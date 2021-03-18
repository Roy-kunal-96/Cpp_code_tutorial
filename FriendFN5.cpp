// >> and << operator overloading using friend function
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		int set_val(int y)
		{
			x=y;
		}
		void show()
		{
			cout<<"x:"<<x<<endl;
		}
	   friend ostream& operator <<(ostream&, A );	
};
ostream& operator <<(ostream& os, A a1)
{
	os<<a1.x;
}
int main()
{
	A a;
	a.set_val(3);
	a.show();
	cout<<a;    //cout.operator <<(a);
	
	return (0);
}
