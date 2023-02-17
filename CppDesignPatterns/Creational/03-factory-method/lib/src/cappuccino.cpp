#include "cappuccino.hpp"

#include <iostream>

Cappuccino::Cappuccino() : Coffee()
{
   setType("Cappuccino");
   std::cout << std::endl
             << "Making a cup of cappuccino." << std::endl;
   std::cout << "Grind and brew one scoop of espresso beans." << std::endl;
   std::cout << "Heat and foam milk." << std::endl;
}