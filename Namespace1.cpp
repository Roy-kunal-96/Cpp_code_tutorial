//Namespace concept
//A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. 
//Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.


#include<iostream>
//All C++ standard library types and functions are declared in the std namespace or namespaces nested inside std.
//using namespace std;

namespace MySpace
{
	int x=5;
	void fun()
	{
		std::cout<<"Hello dude!"<<std::endl;
	}
	int Max(int a,int b)
	{
		return a>b?a:b;
	}
}

int main()
{
	int x=10;
	//using namespace MySpace;  // this is alternative way
	std::cout<<"Hey I'm defined in MySpace x:="<<MySpace::x<<std::endl;
	MySpace::fun();
	std::cout<<"Max of two no.:"<<MySpace::Max(4,7)<<std::endl;
	std::cout<<"Im declared in main(): X="<<x<<std::endl;
	
}
