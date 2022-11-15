#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "animal.h"
#include "fur.h"

using namespace std;

// Dog class - derived from Animal
class Dog : public Animal, public Fur {
   public:
      Dog( string n ) : Animal(n, "dog", "woof"), Fur("soft"), _walked(0) {};
      int walk() { return ++_walked; }

   private:
      int _walked;
};

#endif
