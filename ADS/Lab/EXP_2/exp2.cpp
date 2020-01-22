#include<iostream>
using namespace std;

class DISTANCE
{
	int feet;	//feet and inches can't be acessed 		                  outside class 
	int inches;
public:
void proper()
{
	feet = feet + (inches/12);	
	inches = inches % 12;
}
DISTANCE(int f,int i)
{
	feet = f;
	inches = i;
	proper();
}
void set_distance(int f,int i)
{
	feet = f;
	inches = i;
	proper();
}
DISTANCE add(DISTANCE d2)
{
	DISTANCE temp(d2.feet,d2.inches);
	temp.feet += feet;
	temp.inches += inches;
	temp.proper();
	return temp;
}
void show()
{
	cout<<feet<<" Feet & "<<inches<<" inches"<<endl;
}

};

int main()
{
DISTANCE d1(5,6),d2(7,17),d3(0,0);
d3 = d1.add(d2);
cout<<"d3 has ";
d3.show();
cout<<"d1 has ";
d1.show();
cout<<"d2 has ";
d2.show();
}
