#include <iostream>
using namespace std;

class Temp
{
	public:
	Temp()
	{
		cout<<"Contstructed";
		foo();
	}
	Temp(int s)
	{
		cout<<s;
	}
	~Temp()
	{
		//cout<<"bye bye cruel world";
	}
	int foo()
	{
		cout<<"print something";
	}
};
int main()
{
	Temp t1,t2;
}