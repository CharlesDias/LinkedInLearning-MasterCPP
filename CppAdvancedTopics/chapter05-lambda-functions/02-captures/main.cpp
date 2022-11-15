// lambda-02.cpp by Bill Weinman <http://bw.org/>
// modified 2018-10-10
#include <cstdio>
#include <string.h>
#include <locale>
#include <algorithm>
using namespace std;

constexpr size_t _maxlen = 128;

int main()
{
   char s[] = "big light in sky slated to appear in east";

   char lastc = 0;

   /* In lambda, the variables inside [] are called 'capture'. It's possible to capture variables:
      - [var] Capture 'var' by value
      - [&var] Capture 'var' by reference
      - [ = ] Capture all variables by value
      - [ & ] Capture all variables by reference
      - [&, var] Capture all by  reference, except 'var' by value
      - [&var, var2] Capture 'var' by reference, and 'var2' by value

      The variables inside () are called parameter list
   */
   transform(s, s + strnlen(s, _maxlen), s, [&lastc](const char &c) -> char {
         const char r = (lastc == ' ' || lastc == 0) ? toupper(c) : tolower(c);
         lastc = c;
         return r; 
      } );
   puts(s);

   return 0;
}