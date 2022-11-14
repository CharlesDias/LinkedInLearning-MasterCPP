#include <iostream>
#include "simple-class.h"

/* The default constructor, the copy constructor, the copy operator, and the destructor, those are
   all implicit methods that are included in any class even if we have not defined those methods.*/

int main()
{
   {
      const int value{40};

      std::cout << "Implicit default constructor." << std::endl;
      SimpleClass obj1;

      obj1.setValue(value);
      std::cout << "Value is " << obj1.getValue() << std::endl;
      std::cout << std::endl;

      std::cout << "Implicit copy constructor." << std::endl;
      SimpleClass obj2 = obj1;
      std::cout << "Value is " << obj2.getValue() << std::endl;
      std::cout << std::endl;

      obj1.setValue(70);
      std::cout << "Implicit copy operator or assignment operator." << std::endl;
      obj2 = obj1;
      std::cout << "Value is " << obj1.getValue() << std::endl;
      std::cout << "Value is " << obj2.getValue() << std::endl;
      std::cout << std::endl;
   }
   std::cout << "Call implicit default destructor when going out of scope" << std::endl;

   return 0;
}