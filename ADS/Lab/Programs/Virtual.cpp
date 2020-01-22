#include <iostream>
using namespace std;
class shape
{
	virtual int area()
	{
	    cout<<"hello";
		return 0;
	}
	public:
	bool isBig(shape r)
	{
		if (area() > r.area())
		return true;
		else
		{
		
		return false;
		}
	}
};

class Rectangle: public shape {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

class Triangle: public shape {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

void Triangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  Triangle tri;
  tri.set_values(5,6);
  rect.set_values (3,4);
  if(tri.isBig(rect))
  cout << "area: " << tri.area();
  
  return 0;
}