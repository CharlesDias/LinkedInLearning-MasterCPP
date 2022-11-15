#ifndef FUR_H
#define FUR_H

#include <iostream>
#include <string>

using namespace std;

// Fur class (base)
class Fur {
   public:
      const string & quality() const { return _quality; }

   protected:
      Fur(const string & f) : _quality(f) {}

   private:
      string _quality;

      // Private constructor prevents construction of base class
      Fur() {}
};

#endif
