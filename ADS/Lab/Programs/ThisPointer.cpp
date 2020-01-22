#include<iostream>
using namespace std;

class Distance
{
	int feet,inch;
	public:
	Distance(int feet = 10,int inch = 10)
	{
		this->feet = feet; //Accessing class member using this 
		this->inch = inch; //Accessing class member using this
	}
	void display()
	{
		cout<<"FEET = "<<feet<<" Inch = "<<inch;
	}
};

int main()
{
	Distance d1(4,5);
	d1.display();
}
