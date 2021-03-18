// Template class  wid default argument
#include<iostream>
using namespace std;
// class template wid multiple parameter
template <class x,class y=float>// Default argument in template class
class Myclass
{
	x a;
	y b;
	public:
		int setData(x a,y b);
		void putData()                 //inline by default
		{
			cout<<"A: "<<a<<endl;
			cout<<"B: "<<b<<endl;
		}
};
template<class x,class y>            // defination of template member function
int Myclass<x,y>::setData(x a,y b)
{
	this->a=a;
	this->b=b;
}

int main()
{

	Myclass<int>k;//here another argument is float by default
	k.setData(4,5.6);
	k.putData();
	
	return (0);
}
