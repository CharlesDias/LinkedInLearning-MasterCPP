#ifndef PIG_H
#define PIG_H

#include <iostream>
#include <string>
#include "animal.h"

// Pig class - derived from Animal
class Pig : public Animal {
   public:
      Pig( string n) : Animal(n, "pig", "oink"), _fed(0) {};
      int feed() { return ++_fed; }
      string latin() const { return name() + "-ay"; }
   private:
      int _fed;
};
#endif