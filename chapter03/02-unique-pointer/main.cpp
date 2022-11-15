// unique.cpp by Bill Weinman <http://bw.org/>
// 2018-11-10
#include <cstdio>
#include <memory>
#include <utility>
#include "../lib/strc.h"

void message(const char *s)
{
   printf("\n%s\n", s);
   fflush(stdout);
}

// display object value from unique_ptr
void disp(std::unique_ptr<strc> &o)
{
   if (o)
      puts(o->value());
   else
      puts("null");
   fflush(stdout);
}

// This operation is not allowed. Does not compile!
void call_func_by_copy_pointer_implicity(std::unique_ptr<strc> pointer_copy)
{
   message("call_func_by_copy_pointer_implicity()");
   disp(pointer_copy);
}

// This operation is allowed
void call_func_by_reference(std::unique_ptr<strc> & pointer_copy)
{
   message("call_func_by_reference()");
   disp(pointer_copy);
}

int main(int, char**)
{
   {
      message("create unique pointer one");
      std::unique_ptr<strc> a(new strc("one"));
      disp(a);

      // This operation is not allowed. Does not compile!
      // call_func_by_copy_pointer_implicity(a);
      
      // This operation is allowed
      call_func_by_reference(a);

      // make_unique is supports on C++17
      message("make_unique two");
      auto b = std::make_unique<strc>("two");
      disp(a);
      disp(b);

      message("reset a to three");
      a.reset(new strc("three"));
      disp(a);
      disp(b);

      // It isn't allowed to copy unique_prt. Does not compile!
      // auto C = b;

      message("move b to c");
      auto c = std::move(b);
      disp(a);
      disp(b);
      disp(c);

      // Reset operation calls the destructor of object
      message("reset a");
      a.reset();
      disp(a);
      disp(b);
      disp(c);

      // Release simply release the pointer from the control of smart pointer object.
      // It does not call the destructor and no constructor and no destructor is called on the release. 
      message("release c");
      c.release();
      disp(a);
      disp(b);
      disp(c);

      std::unique_ptr<strc> d(new strc("four"));
      auto e = std::make_unique<strc>("five");
      disp(d);
      disp(e);

      message("end of scope");
   }

   return 0;
}