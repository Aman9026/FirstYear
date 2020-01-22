#include<iostream>
using namespace std;

class Shape
{
	virtual float area() = 0;
	public:
	bool isBigger(Shape& s)
	{   cout<<"This is";
		area();//
		cout<<"And this is";
		s.area();//
		if(area()>s.area())
			return true;
		return false;
	}
};
class Rect:public Shape
{
	float h,w,x,y;
	public:
	Rect(int a=0,int b=0,int c=0,int d=0)
	{
		h=a;w=b;x=c;d=y;
	}
	float area()
	{
		cout<<"Rect's Area"<<endl;
		return h*w;
	}
};
class Circ:public Shape
{
	
	float x,y,r;
	public:
	Circ(float a=0,float b=0,float c=0)
	{
		x=a;y=b;r=c;
	}
	float area()
	{
		cout<<"Circle's Area"<<endl;
		return 3.14 * r * r;
	}
};

int main()
{
	Circ c1(5,6,7);
	Rect r1(5,66,4,2);
	r1.area();
	if(c1.isBigger(r1))
		cout<<"Circle is bigger";
	else
		cout<<"Rect is bigger";	
}





