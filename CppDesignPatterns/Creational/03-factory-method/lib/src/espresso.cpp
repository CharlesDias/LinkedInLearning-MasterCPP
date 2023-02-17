#include "espresso.hpp"

#include <iostream>
#include <string.h>

Espresso::Espresso() : Coffee()
{
   setType("Espresso");
   std::cout << std::endl;
   std::cout << "Making a cup of espresso." << std::endl;
   std::cout << "Grind and brew one scoop of espresso beans." << std::endl;
}