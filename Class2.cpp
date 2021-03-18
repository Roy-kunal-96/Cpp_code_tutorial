// Empty class........size of empty class object
#include<iostream>
using namespace std;
class empty
{
	
};


int main()
{
	empty e1;
	cout<< "Size of object: "<<sizeof(e1)<<endl;
	empty e2;
	cout<< "Size of object: "<<sizeof(e2)<<endl;
	/*The memory allocated for such objects is of nonzero size; therefore, the objects have different addresses.
	 Having different addresses makes it possible to compare pointers to objects for identity.*/
	 
	//guarantee that the addresses of distinct objects of the same type are always distinct.
	cout<<"both these object point to different object"<<endl;
	cout<<"Address of e1: "<<&e1<<endl;
	cout<<"Address of e2: "<<&e2<<endl;
	return (0);
}
