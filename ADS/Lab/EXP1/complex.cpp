#include<iostream>

using namespace std;

struct COMPLEX
{
	int a,b;//a+ib is complex number 
};
COMPLEX add(COMPLEX,COMPLEX);
int main()
{
	COMPLEX C1,C2,C3;
	cout<<"Enter a number:";
	cin>>C1.a>>C1.b;
	cout<<"Enter another number to Add:";
	cin>>C2.a>>C2.b;
	C3 = add(C1,C2);
	cout<<"\nNumber after addition is "<<C3.a<<"+i"<<C3.b<<endl;
 
	return 0;
}
COMPLEX add(COMPLEX P1,COMPLEX P2)
{
	COMPLEX P3;
	P3.a = P1.a + P2.a;
	P3.b = P1.b + P2.b;

	return P3;
}














