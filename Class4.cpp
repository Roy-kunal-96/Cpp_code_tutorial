// An Empty base class typically contributes zero bytes to the size of a derived class.
#include<iostream>
using namespace std;
class empty
{
	
};
class derive : public empty
{
	int i;
};


int main()
{
	empty e1;
	cout<< "Size of object e1 : "<<sizeof(e1)<<endl;
	derive d;
	cout<< "Size of object d  : "<<sizeof(d)<<endl;   // size of derive class is equal ti size of its data member int.....empty class contribute nothing!!!!!
	

	return (0);
}
