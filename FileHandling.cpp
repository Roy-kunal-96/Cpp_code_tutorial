//File handling concept
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
	//fout is obj of ofstream
	// It will create a output stream
	ofstream fout; 
	
	
	// open() and close() is member function of ofstream
	
	fout.open("roy.doc");// create a file if doesnt exist and then bring it to RAM and link it to output stream 
	
	getch();// To hold the execution
	
	fout<<"hello";// << operation defined inostream class and ofstream is subclass 
    getch();
    //ofstream cls;
    fout.close();
	
	return 0;	
}
