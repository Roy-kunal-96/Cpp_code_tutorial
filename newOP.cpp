// new and delete operator
/*For dynamically allocated memory like “int *p = new int[10]”, it is programmers responsibility to deallocate memory when no longer needed. 
If programmer doesn’t deallocate memory, it causes memory leak (memory is not deallocated until program terminates).*/
#include<iostream>
using namespace std;
class integer
{
	int x;
	public:
		int set_val(int x)
		{
			this->x=x;
		}
		void show()
		{
			cout<<"X: "<<x<<endl;
		}
};

int main()
{
	//Dynamically m/m allocation
	integer *ptr= new integer;
	cout<<"Address pointed by ptr: "<<ptr<<endl;
	ptr->set_val(5);
	ptr->show();
	
	// Memory deallocation
	delete ptr;
	cout<<"Address pointed by ptr: "<<ptr<<endl;
	cout<<"Value of X pointed by ptr: "<<endl;   // gives garbage value
	ptr->show();
	
	return (0);
}
