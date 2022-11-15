// poly-lambda.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-10
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
   double n = 42;
   auto fp = [](const auto &n) -> auto { return n * 10; };
   auto x = fp(n);

   cout << "value of x: " << x << " type of x: " << typeid(x).name() << endl;

   // Supported on C++20
   int m = 8;
   auto fp2 = []<typename T>(const T & n) -> T { return n * 10; };
   auto y = fp2(m);

   cout << "value of y: " << y << " type of y: " << typeid(y).name() << endl;

   return 0;
}