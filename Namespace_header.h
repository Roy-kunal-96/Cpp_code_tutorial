#include<iostream>
namespace MySpace
{
	int x=5;
	
//Namespaces may be nested. An ordinary nested namespace has unqualified access to its parent’s members, 
//but the parent members do not have unqualified access to the nested namespace:

	namespace FuckIt
	{
		    void foo()
	            {
	              	std::cout<<"I'm declared in FuckIt :)"<<std::endl;
	            }
         	void fun()
              	{
	                std::cout<<"Hello dude!"<<std::endl;
             	}
          	int Max(int a,int b)
             	{
	                return a>b?a:b;
               	}
    }
}
//A namespace can be declared in multiple blocks in a single file, and in multiple files. The compiler joins the parts together during preprocessing and
// the resulting namespace contains all the members declared in all the parts.
//An example of this is the std namespace which is declared in each of the header files in the standard library.
namespace SuckIt
{
	void foo()
	{
	   std::cout<<"I'm declared in SuckIt :)"<<std::endl;
	}
}
//This is called an unnamed or anonymous namespace and it is useful when you want to make variable declarations invisible to code in other files 
//(i.e. give them internal linkage) without having to create a named namespace. All code in the same file can see the identifiers in an 
//unnamed namespace but the identifiers, along with the namespace itself, are not visible outside that file—or more precisely outside the translation unit.

namespace 
{
	int var;
	void fuck()
	{
	std::cout<<"I'm declared in unnamed namespace"<<std::endl;
    }
}
