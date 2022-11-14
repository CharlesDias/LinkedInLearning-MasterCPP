#include <iostream>
#include "member-function.h"

/* So the rule of thumb is this, const functions can always be called, from mutable objects and from constant objects. 
   Non-const functions may only be called by non-const objects. */
int main(int, char**) 
{
   const int value = 50;
   MemberFunction funcA;
   funcA.setValue(value);

   std::cout << "funcA is a mutable object, it gets a mutable getValue." << std::endl;
   std::cout << funcA.getValue() << std::endl;

   // If "int getValue() const" is remove, we'll got a compilation error.
   const MemberFunction funcB = funcA;
   std::cout << "funcB is a const object, it gets a const getValue. " << std::endl;
   std::cout << funcB.getValue() << std::endl;

}
