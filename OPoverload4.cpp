// Oveload << opertaor
#include<iostream>
using namespace std;
class Date
{
	int d,m,y;
	public:
		int set_val(int x,int y,int z)
		{
			d=x;
			m=y;
			y=z;
		}
		void display()
		{
			cout<<d<<":"<<m<<":"<<y<<endl;
		}
	    friend	ostream& operator<<(ostream &os,Date &dt);
};
 ostream& operator<<(ostream &os,Date &dt)
		{
			os<<dt.d<<"/"<<dt.m<<"/"<<dt.y;
			return os;
			
		}
int main()
{
	Date D;
	D.set_val(18,3,96);
	D.display();
	cout<<D;                    //cout=os.operator<<()
	
	return (0);
}
