// Empty class
#include<iostream>
using namespace std;
class empty
{
	char arr[0];
};


int main()
{
	empty e1;
	cout<< "Size of object: "<<sizeof(e1)<<endl;
	empty e2;
	cout<< "Size of object: "<<sizeof(e2)<<endl;
	
	cout<<"Address of e1: "<<&e1<<endl;
	cout<<"Address of e2: "<<&e2<<endl;
	return (0);
}
