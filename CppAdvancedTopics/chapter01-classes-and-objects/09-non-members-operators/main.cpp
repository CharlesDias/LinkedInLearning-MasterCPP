#include <iostream>
#include "rational.h"

using namespace std;

// // This is a nom-member operator for std::cout
std::ostream & operator << (std::ostream & o, const Rational & r)
{
   if(r.getDenominator() == 1)
   {
      return o << r.getNumerator();
   }
   else
   {
      return o << r.getNumerator() << '/' << r.getDenominator();
   }
}

// This is a nom-member operator
Rational operator + (const Rational &lhs, const Rational &rhs)
{
   return Rational((lhs.getNumerator() * rhs.getDenominator()) + (lhs.getDenominator() * rhs.getNumerator()), lhs.getDenominator() * rhs.getDenominator());
}

int main(int, char **)
{
   Rational a = 7; // 7/1
   cout << "a is: " << a << endl;
   Rational b(5, 3); // 5/3
   cout << "b is: " << b << endl;
   Rational c = b; // copy constructor
   cout << "c is: " << c << endl;
   Rational d; // default constructor
   cout << "d is: " << d << endl;
   d = c; // assignment operator
   cout << "d is: " << d << endl;
   Rational &e = d; // reference
   d = e;           // assignment to self!
   cout << "e is: " << e << endl;

   cout << a << " + " << b << " = " << a + b << endl;
   cout << a << " - " << b << " = " << a - b << endl;
   cout << a << " * " << b << " = " << a * b << endl;
   cout << a << " / " << b << " = " << a / b << endl;

   cout << a << " + " << 14 << " = " << a + 14 << endl;
   cout << b << " + " << 14 << " = " << b + 14 << endl;

   // This code compile just because the operator "+" is a nom-member operator
   cout << 14 << " + " << b << " = " << 14 + b << endl;

   return 0;
}
