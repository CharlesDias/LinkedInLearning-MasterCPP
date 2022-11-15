#include <iostream>
#include "animal.h"

/* The default constructor, the copy constructor, the copy operator, and the destructor, those are
   all implicit methods that are included in any class even if we have not defined those methods.*/

int main()
{
   Animal objA;
   objA.print();

   const Animal objB("cat", "fluffy", "meow");
   objB.print();

   const Animal objC = objB;
   objC.print();

   return 0;
}