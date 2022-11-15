#ifndef PIG_H
#define PIG_H

#include <iostream>
#include <string>
#include "animal.h"
#include "fur.h"

// Pig class - derived from Animal
class Pig : public Animal, public Fur {
   public:
      Pig( string n) : Animal(n, "pig", "oink"), Fur("soft"), _fed(0) {};
      int feed() { return ++_fed; }
      string latin() const { return name() + "-ay"; }
      virtual ~Pig() { cout << "Destructor called from Pig class" << endl; }

   private:
      int _fed;
};

#endif