#include <iostream>
#define TEN 5+5
using namespace std;
int main()
{
	cout<<max(5);
	cout<<max(6);
	cout<<max(3);
}

int max(int d)
{
	static int a=0;
	if(d > a)
	a = d;
	return a;
}