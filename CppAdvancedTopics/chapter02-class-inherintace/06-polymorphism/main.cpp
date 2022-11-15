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
   {
      Dog d("Rover");
      Cat c("Fluffy");
      Pig p("Arnold");

      d.speak();
      c.speak();
      p.speak();

      cout << "---------------------------------" << endl;
      Animal *ap[] = {&d, &c, &p};
      for(auto p : ap) 
      {
         p->speak();
      }

      cout << "---------------------------------" << endl;
   }

   return 0;
}