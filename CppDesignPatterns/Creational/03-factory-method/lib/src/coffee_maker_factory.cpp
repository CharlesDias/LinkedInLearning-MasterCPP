#include "coffee_maker_factory.hpp"
#include "espresso.hpp"
#include "cappuccino.hpp"

#include <iostream>

std::unique_ptr<Coffee> CoffeeMakerFactory::getCoffee()
{
   int choice;

   std::cout << "Select type of coffee to make: " << std::endl;
   std::cout << "1: Espresso" << std::endl;
   std::cout << "2: Cappuccino" << std::endl;

   std::cin >> choice;

   switch (choice)
   {
   case 1:
      return std::make_unique<Espresso>();
      break;
   case 2:
      return std::make_unique<Cappuccino>();
      break;
   default:
      std::cout << "invalid Selection" << std::endl;
      return nullptr;
      break;
   }
}