#include<iostream>
using namespace std;
class complex
{
	float a,b;
	public:
		int get_val(float,float);
		void put_val()
		{
			cout<<"value of aand b"<<a<<endl<<b;
		}
	complex add(complex);
};
int complex::get_val(float x,float y)
{
	a=x;
	b=y;
	
}
complex complex::add(complex c)
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;
}
int main()
{
  complex c1,c2,c3;
  c1.get_val(5.6,6.6);
  c2.get_val(5.4,3.4);
  c3= c1.add(c2);//c3 = c1 + c2;
  c3.put_val();
  return 0;
}
