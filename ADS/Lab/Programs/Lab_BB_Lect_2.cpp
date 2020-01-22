#include<iostream>
using namespace std;

int max(int a)
{
	static int greatest = 0;
	if(a > greatest)
		greatest = a;
	cout<<greatest;
	return greatest;
}

int main()
{
	max(5);
	max(155);
	max(52);
	max(53);
}