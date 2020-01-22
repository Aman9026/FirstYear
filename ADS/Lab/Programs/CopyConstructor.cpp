#include <iostream>
using namespace std;
class BigNum
{
		int num;
	public:
		BigNum(int x)
		{
			num = x;
			print();
		}
		BigNum(const BigNum &a)
		{
			cout<<"cheating";
		}
		void print()
		{
			cout<<num<<endl;
		}
};


int main() {
	// your code goes here
	BigNum N(6);
	BigNum M(15);
	M = N;
	M.print();
	
	
	return 0;
}