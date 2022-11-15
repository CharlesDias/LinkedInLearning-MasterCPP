#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "animal.h"
#include "fur.h"

// Cat class - derived from Animal
class Cat : public Animal, public Fur {
   public:
      Cat( string n ) : Animal(n, "cat", "meow"), Fur("silky"), _petted(0) {};
      int pet() { return ++_petted; }
      void speak() const { cout << "OVERLOAD speak from Cat class" << endl; }
      virtual ~Cat() { cout << "Destructor called from Cat class" << endl; }

   private:
      int _petted;
};

#endif