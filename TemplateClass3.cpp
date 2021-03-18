//Nontype template argument
#include<iostream>
using namespace std;
template <class T,int size>
class Myclass
{
	T arr[size];
	public:
		void show()
		{
			cout<<"Element of array:"<<endl;
			for(int i=0;i<size;i++)
			{
				arr[i]=i;
				cout<<arr[i]<<endl;
			}
		}
		
};
int main()
{
	Myclass<int,10>k;
	k.show();
	return 0;
}
