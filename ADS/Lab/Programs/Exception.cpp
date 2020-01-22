#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw 1;
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   } catch (const char* msg) {
     cout << msg << endl;
   }catch (int a)
   {
	   cout<<a;
   }

   return 0;
}