#include "simple-class.h"
#include <iostream>

SimpleClass::SimpleClass()
{
   std::cout << "Default constructor" << std::endl;
}

SimpleClass::~SimpleClass()
{
   std::cout << "Default destructor" << std::endl;
}

void SimpleClass::setValue(const int & value)
{
   _value = value;
}

int SimpleClass::getValue() const
{
   return _value;
}
