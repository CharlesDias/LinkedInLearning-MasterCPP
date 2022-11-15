#include "member-function.h"
#include <iostream>

void MemberFunction::setValue(const int & value)
{
   _value = value;
}

int MemberFunction::getValue()
{
   std::cout << "mutable getValue" << std::endl;
   return _value;
}

int MemberFunction::getValue() const
{
   std::cout << "const getValue" << std::endl;
   return _value;
}