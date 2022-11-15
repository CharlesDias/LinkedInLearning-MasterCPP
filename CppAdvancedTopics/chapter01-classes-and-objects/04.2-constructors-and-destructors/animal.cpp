#include "animal.h"
#include <iostream>

const string unknown = "unknown";
const string clone_prefix = "clone-";

// Default constructor
Animal::Animal()
   : _type(unknown), _name(unknown), _sound(unknown)
{
   cout << "Default constructor" << endl;
}

// Initialize list
Animal::Animal(const string & type, const string & name, const string & sound)
   : _type(type), _name(name), _sound(sound)
{
   cout << "Constructor with arguments" << endl;
}

// Copy constructor
Animal::Animal(const Animal & rhs) //rhs is right-habd side
{
   cout << "Copy constructor" << endl;
   _name = clone_prefix + rhs._name;
   _type = rhs._type;
   _sound = rhs._sound;
}

// Copy operator
Animal & Animal::operator = (const Animal & rhs)  //rhs is right-habd side
{
   cout << "Copy operator" << endl;

   if(this != &rhs)
   {
      _name = clone_prefix + rhs._name;
      _type = rhs._type;
      _sound = rhs._sound;
   }
   return *this;
}

// Destructor
Animal::~Animal()
{
   cout << "Destructor: " << _name << " the " << _type << endl;
}

void Animal::print() const
{
   cout << _name << " the " << _type << " says " << _sound << endl;
}