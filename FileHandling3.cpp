//File handling concept
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("roy.doc");         //
	char ch;
	ch=fin.get();
	while(!fin.eof())    //eof()=end of file.........return true when file ends
	{
		
		cout<<ch;       
		ch=fin.get(); //get() doesnt consider space as data seperator
	}
	
	fin.close();
	return (0);
}
