// lambda.cpp by Bill Weinman <http://bw.org/>
// modified 2018-10-10
#include <cstdio>
#include <string.h>
#include <locale>
#include <algorithm>
using namespace std;

constexpr size_t _maxlen = 128;

class ftitle
{
   char lastc;

public:
   ftitle() : lastc(0) {}
   char operator()(const char &c);
};

// functor
char ftitle::operator()(const char &c)
{
   const char r = (lastc == ' ' || lastc == 0) ? toupper(c) : tolower(c);
   lastc = c;
   return r;
}

int main()
{
   char s[] = "big light in sky slated to appear in east";

   // using functor
   transform(s, s + strnlen(s, _maxlen), s, ftitle());
   puts(s);

   // using lambda
   char lastc = 0;
   transform(s, s + strnlen(s, _maxlen), s, [&lastc](const char & c)->char {
      const char r = (lastc == 0 || lastc == ' ') ? toupper(c) : tolower(c);
      lastc = c;
      return r;
   } );
   puts(s);

   return 0;
}