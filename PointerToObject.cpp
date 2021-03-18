// Pointer to object.....useful in creating object at runtime.
#include<iostream>
using namespace std;
class Box
{
	int lenght,bredth,height;
	public:
		int setDimension(int a,int b,int c)
		{
		lenght=a;
		bredth=b;
		height=c;
    	}
		void showDimension()
		{
			cout<<"Lenght: "<<lenght<<endl<<"Bredth: "<<bredth<<endl<<"Height: "<<height<<endl;
		}
};
int main()
{
	Box B,*ptr;
	B.setDimension(2,3,4);
	B.showDimension();
	ptr=&B;
	cout<<"************************"<<endl;
	ptr->setDimension(2,3,4);
	
	//Either way of invoking the member function
	ptr->showDimension();
	
	cout<<"************************"<<endl; 
	// Parenthesis is important as . operator has higher precedence than * operator  
   (*ptr).showDimension();
	
	
	
	return (0);
	
}
