#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "animal.h"

// Cat class - derived from Animal
class Cat : public Animal {
   public:
      Cat( string n ) : Animal(n, "cat", "meow"), _petted(0) {};
      int pet() { return ++_petted; }
   
   private:
      int _petted;
};

#endif