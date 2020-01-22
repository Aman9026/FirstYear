/*Create class SHAPE(without constructor) and derive this class into two class
a.Rectangle
b.Circle
Create constructor and destructors accordingly
#follow OOPs*/
#include <iostream>
#define pi 3.14
using namespace std;
/*1.We can't Create Object of Abstract class
  2.There should be a fuction with same name as of virtual class in derived class*/
class SHAPE //Abstract Class
{
  virtual float area() = 0;//Pure virtual fuction
  
  public:
	bool isBigger(SHAPE* s)
	{
	  if(s->area() > area())
	  return false;
	  return true;
	}
};
class RECT : public SHAPE
{
	float l,b,x,y;
	public:
	RECT(int li=0 , int bi=0 , int xi=0 , int yi=0)
	{
		l=li;
		b=bi;
		x=xi;
		y=yi;
	}
	float area()
	{
		return l * b; 
	}
};
class CIR : public SHAPE
{
	float r,x,y;
	public:
	CIR(int ri=0 , int xi=0 , int yi=0)
	{
		r=ri;
		x=xi;
		y=yi;
	}
	float area()
	{
		return pi * r * r; 
	}
};
class TRI : public SHAPE
{
        float a,x,y;
        public:
        TRI(float ai=0 , float xi=0, float yi=0)
        {
                a=ai;
                x=xi;
                y=yi;
        }
        float area()
        {
                return (1.73 / 4) * a * a;       
        }
};

int main()
{
	CIR c1(2,3,4);
	RECT r1(3,4,6,7);
	TRI t1(2,5,1);
	if(c1.isBigger(&r1))
	        cout<<"c1 area is Bigger r1"<<endl;
	else
	        cout<<"r1 area is Bigger c1"<<endl;
	if(t1.isBigger(&r1))
	        cout<<"t1 area is Bigger r1"<<endl;
	else
	        cout<<"r1 area is Bigger t1"<<endl;
	if(c1.isBigger(&t1))
	        cout<<"c1 area is Bigger t1"<<endl;
	 else
	        cout<<"t1 area is Bigger c1"<<endl;
	return 0;
}