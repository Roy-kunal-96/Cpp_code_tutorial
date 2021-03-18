// Type conversion
//Primitive to class type  (t=y)
//using constructor
#include<iostream>
using namespace std;

class time
{
	int hr;
	int min;
	public:
		time()
		{
		}
       	time(int x)
        	{
		            hr=x/60;
	              	min=x%60;
         	}
      	void show()
            {
		           cout<<"Hours:"<<hr<<endl<<"Minute:"<<min<<endl;
		           cout<<"Time:"<<hr<<"hr"<<":"<<min<<"min"<<endl;
	        }
};

int main()
{
	time t;
	int y=129;
	t=y;// interpreted as t.time(y).........but this is not right syntex
	t.show();
}

