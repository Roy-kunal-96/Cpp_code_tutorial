#include<iostream>
using namespace std;

struct student
{
  int roll_no;
  char name[20];
  float per;
};
student input(student);
int display(student);

int main()
{

student s1;
input(s1);
display(s1);
return 0;
}

 student input(student s)
{
   
  cout<<"enter the details:"<<endl;
  cout<<"ROLL NO:";
  cin>>s.roll_no;
  cout<<"NAME:";
  cin>>s.name;
  cout<<"PERCENTAGE:";
  cin>>s.per;
   return s;
}
int display(student s)
{
   cout<<s.roll_no<<endl<<s.name<<s.per<<endl;
   return 0;
}
