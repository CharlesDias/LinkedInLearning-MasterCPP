#include <iostream>

class SimpleClass 
{
   public:
      /* This code does not compile because of explicit declaration before constructor.
         if the explicit is removed, the program will compile. */
      explicit SimpleClass(const int & value) : _value(value) {}
      void setValue(const int & value) { _value = value; }
      int getValue() const { return _value; }

   private:
      // The default constructor as protected cannot be called.
      SimpleClass();
      int _value = 0;
};

void func(const SimpleClass & _obj) 
{
   std::cout << "Value is: " << _obj.getValue() << std::endl;
}

// This code does not compile because of explicit declaration before constructor
int main()
{
   SimpleClass obj = 'x';
   std::cout << "Value is: " << obj.getValue() << std::endl;
   func('y');

   return 0;
}