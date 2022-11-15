// side-effects.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-11
#include <cstdio>
#include <cstdlib>
#include <ctime>

namespace bw
{
   static unsigned _x = 0;
   class R
   {
   public:
      unsigned operator()()
      {
         srand(_x + (unsigned)time(0));
         return (_x += rand()) % 100;
      }
   };
}

#define TIMES(a, b) (a * b)
#define MAX(a, b) (a > b ? a : b)

template<typename T>
void print_max(T a, T b)
{
   printf("max of %d and %d is %d\n", a, b, (a > b ? a : b));
}

int main()
{
   int a = 5;
   int b = 25;

   printf("macro returns %d\n", TIMES(5, 25));
   printf("max of %d and %d is %d\n\n", a, b, MAX(a, b));

   // MAX does not work properly here because the functor (obj1() and obj2()) are called many times
   bw::R obj1;
   bw::R obj2;
   printf("Wrong behaviour\n");
   printf("max of %d and %d is %d\n\n", obj1(), obj2(), MAX(obj1(), obj2()));

   printf("Right behaviour\n");
   print_max(obj1(), obj2());

   return 0;
}