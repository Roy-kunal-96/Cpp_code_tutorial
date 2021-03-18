//Exception handling
//Class type as exception
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class student
{
   char *name; //	char name[20];
	int roll_no;
	public:
	
		student(int r,char n[]) //	student(int r,char *n)
		{
			roll_no=r;
			name = new char[strlen(n)];
			strcpy(name,n);
		}
		void showData()
		{
		   cout<<"Roll No. :"<<roll_no<<endl;
		   cout<<"Name :"<<name<<endl;
		}
		friend void test(student s);
 }; 
 int main()
 {
 	try
 	{
 		//test for obj1
 		student s1(25,"Abhi kumar");
 		test(s1);
 		cout<<endl<<endl<<endl;
 		
 		// test for obj2
 		cout<<"press any key to test for other obj :"<<endl;
 		getch();         //to hold screen
 		student s2(20,"kunal roy");
 		test(s2);
	 }
	 catch(student s)
	 {
	 	cout<<"Exception caught:"<<endl;
	 	s.showData();
	 }
 	
 	 cout<<endl<<endl<<endl;
	 cout<<"Get the fuck out of here!! :)"<<endl;
	 
	 
	 return 0;
 }
 void test(student s)
 {
   student sE(20,"kunal roy");
   if(s.roll_no==sE.roll_no)
     throw s;
    else
    s.showData();
}
