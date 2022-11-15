#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

// Animal class (base)
class Animal
{
   public:
      virtual void speak() const;
      const string &name() const { return _name; }
      const string &type() const { return _type; }
      const string &sound() const { return _sound; }

      // As we have a virtual method inside the class, we have to declare the the destructor as virtual
      virtual ~Animal() { cout << "Destructor called from Animal class" << endl; }

   protected:
      // Protected constructor for use by derived classes
      Animal(const string &n, const string &t, const string &s)
         : _name(n), _type(t), _sound(s) {}

   private:
      string _name;
      string _type;
      string _sound;

      // Private constructor prevents construction of base class
      Animal() {}
};

#endif