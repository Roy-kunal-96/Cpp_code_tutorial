//File handling concept
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;  //It creates input stream
	fin.open("roy.doc");         //link wid the file as it upload it in RAM from secondary storage
	char ch;
	fin>>ch;
	while(!fin.eof())    //eof()=end of file.........return true when file ends
	{
		
		cout<<ch;       
		fin>>ch;
	}
	
	fin.close();
	return (0);
}
// there is no space b/w Hello and student in o/p
