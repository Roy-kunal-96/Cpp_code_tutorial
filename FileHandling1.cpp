//file handling concept
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
	fstream fout;
	fout.open("roy.dat");
	getch();
	fout<<"hello";
    getch();
	
	return 0;	
}
