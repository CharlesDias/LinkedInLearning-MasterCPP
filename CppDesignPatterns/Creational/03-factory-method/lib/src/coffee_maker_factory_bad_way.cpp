#include "coffee_maker_factory_bad_way.hpp"
#include "espresso.hpp"
#include "cappuccino.hpp"

#include <iostream>

Coffee* CoffeeMakerFactoryBadWay::getCoffee()
{
   int choice;

   std::cout << "Select type of coffee to make: " << std::endl;
   std::cout << "1: Espresso" << std::endl;
   std::cout << "2: Cappuccino" << std::endl;

   std::cin >> choice;

   switch (choice)
   {
   case 1:
      return new Espresso;
      break;
   case 2:
      return new Cappuccino;
      break;
   default:
      std::cout << "invalid Selection" << std::endl;
      return nullptr;
      break;
   }
}