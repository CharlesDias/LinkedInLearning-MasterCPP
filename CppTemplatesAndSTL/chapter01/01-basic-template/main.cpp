#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maxof(const T &a, const T &b)
{
   return (a > b ? a : b);
}

int main()
{
   // Compare the value
   int a = 7;
   int b = 9;
   cout << "a: " << a << endl;
   cout << "a: " << b << endl;
   cout << "max is " << maxof<int>(a, b) << endl;
   cout << "---------------------" << endl;
   
   // Compare the pointer address
   const char * d = "ptr_d";
   const char * c = "ptr_c";
   cout << "ptr_c: " << &c << endl;
   cout << "ptr_d: " << &d << endl;
   cout << "max is " << maxof<const char *>(c, d) << endl;
   cout << "---------------------" << endl;

   // The great-than operator on strings does a lexicographical comparison on the strings
   string e = "anna";
   string f = "bety";
   cout << "e: " << e << endl;
   cout << "f: " << f << endl;
   cout << "max is " << maxof<string>(e, f) << endl;

   return 0;
}