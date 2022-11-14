#include <iostream>
#include "simple-class.h"

int main()
{
   {
      const int value{50};
      SimpleClass simpleClass;
      simpleClass.setValue(value);
      std::cout << "Simple class value is: " << simpleClass.getValue() << std::endl;
   }
   std::cout << "Going out of scope" << std::endl;

   return 0;
}