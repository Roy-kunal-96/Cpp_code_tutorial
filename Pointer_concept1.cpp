//int pointer concept
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class A
{
	int *ptr;
	 public:
	 	A(int *x)
	 	{
	 		ptr=new int;
	 		*ptr=*x;
		 }
		void showData()
		{
			cout<<"Address pointed by ptr:"<<ptr<<endl;
		   cout<<"Value pointed by ptr:"<<*ptr<<endl;
		}
};
int main()
{
	int y=4;
	A a(&y);
	a.showData();
}
