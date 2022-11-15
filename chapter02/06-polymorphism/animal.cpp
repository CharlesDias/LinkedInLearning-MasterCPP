#include "animal.h"

// This isn't support yet
//#include <format>

void Animal::speak() const 
{
   // cout << format("{} the {} says {}\n", _name.c_str(), _type.c_str(), _sound.c_str());
   cout << _name.c_str() << " the " <<  _type.c_str() << " says " << _sound.c_str() << endl;
}
