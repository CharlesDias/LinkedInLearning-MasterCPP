// simple-inheritance.cpp by Bill Weinman <http://bw.org/>
// 2018-10-08
#include <iostream>
#include <string>
#include "dog.h"
#include "cat.h"
#include "pig.h"

using namespace std;

int main() 
{
   Dog d("Rover");
   Cat c("Fluffy");
   Pig p("Arnold");
    
   d.speak();
   c.speak();
   p.speak();
    
   cout << "the " << d.type() << " has been walked " << d.walk() << " times" << endl;
   cout << "the " << c.type() << " has been petted " << c.pet() << " times" << endl;
   cout << "the " << p.type() << " has been fed " << p.feed() << " times" << endl;
   
   cout << "The pig is sometimes called " << p.latin() << endl;

   cout << "The " << c.type() << " grooms her " << c.quality() << " fur" << endl;

   return 0;
}