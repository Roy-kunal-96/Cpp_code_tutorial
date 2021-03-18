#include<iostream>
#include"Namespace_header.h"
using namespace std;
using namespace MySpace;
using namespace FuckIt;
using namespace SuckIt;


int main()
{
	fun();
	cout<<"max of two no:"<<Max(4,5)<<endl;
	
    cout<<"*****************************"<<endl;
     
    //foo();              // Generate ambiguity as it declared in both namespace
	FuckIt::foo();
	SuckIt::foo();
	
	cout<<"*****************************"<<endl;
	
	var=5.6;
	cout<<"value in var:"<<var<<endl;
	fuck();
	
	return (0);
}
