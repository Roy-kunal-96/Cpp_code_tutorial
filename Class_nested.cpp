//Nested  class
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	int rollno;
	char *name;
	
	class Address// Nested class
	{
		char street[20];
		char city[20];
		char state[20];
		char pincode[7];
		public:
			void setAddress(char *s,char *c,char *st,char *p)
			{
				strcpy(street,s);
				strcpy(city,c);
				strcpy(state,s);
				strcpy(pincode,p);
			}
			void showAddress()
			{
				cout<<"Street:"<<street<<endl;
				cout<<"City:"<<city<<endl;
				cout<<"State:"<<state<<endl;
				cout<<"Pincode:"<<pincode<<endl;
			}
   };
	Address ad;
    public:
	    
	    void setVal(int r,char *n)
				{
				  rollno=r;
				  name=new char[20];
				  strcpy(name,n);
				}
		void SetAddval(char *st,char *ct,char *sta,char *pt)
		{
			ad.setAddress(st,ct,sta,pt);
		}
		void showVal()
		{
			cout<<"Roll no:"<<rollno<<endl;
			cout<<"Name:"<<name<<endl;
			ad.showAddress();
		}
				
};
	int main()
	{
		Student s1;
		s1.setVal(20,"kunal");
		s1.SetAddval("12/1","Delhi","New Delhi","110091");
		s1.showVal();
		
		return (0);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

