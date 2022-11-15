// #include <cstdio>
#include <iostream>

using namespace std;

class Num
{
   public:
      Num( int value = 0) : _value(value) {}
      int getValue() const { return _value; }
      void setValue ( int value ) { _value = value; }
      Num & operator ++ ();
      Num operator ++ (int);
      Num & operator -- ();
      Num operator -- (int);

   private:
      int _value = 0;
};

// Pre-increment
Num & Num::operator ++ ()
{
   cout << "pre-increment: ";
   _value += 1;
   return *this;
}

// Post-increment
Num Num::operator ++(int)
{
   cout << "post-increment: ";
   Num temp = *this;
   _value += 1;
   return temp;
}

// Pre-decrement
Num & Num::operator -- ()
{
   cout << "pre-decement: ";
   _value -= 1;
   return *this;
}

// Post-decrement
Num Num::operator -- (int)
{
   cout << "post-decrement: ";
   Num temp = *this;
   _value -= 1;
   return temp;
}

ostream & operator << (ostream & out, const Num & num)
{
   return out << (num.getValue());
}


int main()
{
   Num num{42};

   cout << "Before - Value is " << num << endl;
   cout << "Value is " << ++num << endl;
   cout << "After  - Value is " << num << endl;
   cout << endl;

   cout << "Before - Value is " << num << endl;
   cout << "Value is " << num++ << endl;
   cout << "After  - Value is " << num << endl; 
   cout << endl;

   cout << "Before - Value is " << num << endl;
   cout << "Value is " << --num << endl;
   cout << "After  - Value is " << num << endl;
   cout << endl;
   
   cout << "Before - Value is " << num << endl;
   cout << "Value is " << num-- << endl;
   cout << "After  - Value is " << num << endl;
   return 0;
}