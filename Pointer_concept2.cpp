//char pointer concept
//*ptr points to very first element of array
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class A
{
	char *ptr;
	public:
		A(char x[])
		{
			ptr= new char[strlen(x)];
			strcpy(ptr,x);
		}
	void show()
	{
		int y=strlen(ptr);
		cout<<"Value pointed by ptr:"<<ptr<<endl;
		cout<<"strlen(ptr) :"<<y<<endl;
		
		cout<<"Value in array pointed by ptr:"<<endl;
		for(int i=0;i<y;i++)
		{
			cout<<"["<<i<<"] :"<<*ptr<<endl;
			*ptr++;
		}
	}
	~A()
	{
		delete ptr;
		cout<<"object destructed: :)";
	}
};
int main()
{
	A a("KUNAL ROY");
	a.show();
}
