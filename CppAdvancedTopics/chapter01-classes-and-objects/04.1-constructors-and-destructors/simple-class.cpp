#include "simple-class.h"
#include <iostream>

void SimpleClass::setValue(const int & value)
{
   _value = value;
}

int SimpleClass::getValue() const
{
   return _value;
}
