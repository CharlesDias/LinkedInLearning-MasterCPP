#pragma once

#include "coffee.hpp"
#include <memory>

class CoffeeMakerFactory 
{
public:
   std::unique_ptr<Coffee> getCoffee();
};