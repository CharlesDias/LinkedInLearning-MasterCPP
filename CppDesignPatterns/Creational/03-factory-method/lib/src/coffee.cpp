#include "coffee.hpp"

std::string Coffee::getType() const
{
   return _type;
}

void Coffee::setType(std::string_view type)
{
   _type = type;
}