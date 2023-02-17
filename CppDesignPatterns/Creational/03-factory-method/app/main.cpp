#include "coffee.hpp"
#include "coffee_maker_factory.hpp"
#include "coffee_maker_factory_bad_way.hpp"

#include <iostream>
#include <memory>

int main(int argc, char **argv)
{
   {
      CoffeeMakerFactory coffeeMachine;
      std::unique_ptr<Coffee> cup = coffeeMachine.getCoffee();
      std::cout << "You had asked for a(n) " << cup->getType() << std::endl;
   }

   {
      CoffeeMakerFactoryBadWay coffeeMachineBad;
      Coffee *cupBadWay = coffeeMachineBad.getCoffee();
      std::cout << "You had asked for a(n) " << cupBadWay->getType() << std::endl;
      // Memory leak if forget release the allocated memory.
      // Run the command "make memo-leak" on console to run the application with Valgrind
      if(argc == 1)
      {
         delete cupBadWay;
      }
   }

   return 0;
}