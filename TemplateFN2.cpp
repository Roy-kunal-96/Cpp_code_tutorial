//Template function
#include<iostream>
using namespace std;


template <class T>
void swap(T &a,T &b)
{
	T temp=a;
	
	a=b;
	b=temp;
	
}
int main()
{
	int m;
	int n;
	
	cout<<"Enter the no to be swapped: "<<endl;
	cin>>m>>n;
//	cin>>n;
    
    swap(m, n);
	cout<<"Swapiing of no: "<<"M:"<<m<<endl<<"N:"<<n<<endl;	
	
	return(0);
}
