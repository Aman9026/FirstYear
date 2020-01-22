#include<iostream>
#include<cstdlib>
using namespace std;

class STACK
{
	int ar[200],n;
	public:
	STACK()
	{n=-1;}
	void push(int a)
	{
		n++;
		ar[n] = a;
	}
	int pop()
	{
		if(n==-1)
		{
		cout<<"Underflow"<<endl;
		exit(0);
		}
		else
		{
		n--; 
		return ar[n+1];
		}
	}
	void print()
	{
		if(n==-1)
		cout<<"Underflow";
		else
		{
		for(int i = 0 ; i <= n ; i++)
		cout<<ar[i]<<endl;
		}
	}
	int size()
	{
		return n+1;
	}
	int top()
	{
		if(n==-1)
		cout<<"Underflow"<<endl;
		else
		return ar[n];
	}
};

int main()
{
STACK s1,s2;
s1.push(5);
s1.push(6);
cout<<"Popped element of s1 = "<<s1.pop()<<endl;

for(int i = 0 ; i < 100 ; i++)
	s2.push(i);

cout<<"Popped element of s2 = "<<s2.pop()<<endl;

cout<<"Printing s1 : ";
s1.print();
cout<<"Printing s2 : ";
s2.print();

cout<<"Size of s1 = "<<s1.size()<<endl;
cout<<"Size of s2 = "<<s2.size()<<endl;

int a = s1.top();
int b = s2.top();
cout<<"Top of s1 = "<< a<<endl;
cout<<"Top of s2 = "<< b<<endl;
return 0;
}
