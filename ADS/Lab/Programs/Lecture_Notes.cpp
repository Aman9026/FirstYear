#include<iostream>
using namespace std;

class distance
{
	int f,i;
	public:
	distance(int a=0,int b=0)
	{
		f = a;
		i = b;
	}
	distance()
	{
		f = 0;
		i = 0;
	}
	distance(const distance& t)
	{
		f = t.f;
		//i = t.i;
	}
};
int main()
{
	distance d1(5,5);
	distance d2(5);
	distance d3;
	d2.add(d1);
	distance::add(d1,d2);
	distance::add(d1,d2,d3);
	
	d3 = d1;
}