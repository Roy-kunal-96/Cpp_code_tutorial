// Template function
#include<iostream>
#include<conio.h>
using namespace std;
template <class T>         //Generic type
T max(T &a,T &b)
{
/*	if(a>b)
	return(a);
	else
	return(b);*/
	
	return a<b?a:b;
}
int main()
{

	
	
  
	cout<<"MAX: "<<max(4, 5)<<endl;
    cout<<"MAX: "<<max(4.5 , 8.7)<<endl;
	
	
	
	return(0);
	
}
