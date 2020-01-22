#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
	complex(int a=0, int b=0)
	{
		r = a;
		i = b;
	}
	complex operator+(const complex& c)
	{
		complex temp;
		temp.r = r + c.r;
		temp.i = i + c.i;
		return temp;
	}
	complex operator*(const complex& c)
	{
		complex t(r*c.r-i*c.i,i*c.r+r*c.i);
		return t;
	}
	void display()
	{
		cout<<"real= "<<r<<"i= "<<i<<endl;
	}
	
};

int main()
{
	complex c1(5,1),c2(6,8),c3,c4(6,7);
	c3 = c1 * c2;
	c3.display();
	// c3 = c1 + c2 + c3;
}