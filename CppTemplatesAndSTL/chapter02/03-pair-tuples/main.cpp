// pair.cpp by Bill Weinman <http://bw.org/>
// 2019-09-10 for CppSTL
#include <iostream>
#include <utility>
#include <tuple>
#include <string>
using namespace std;

// print the pair
template <typename T1, typename T2>
void printpair(pair<T1, T2> &p)
{
   cout << p.first << " : " << p.second << endl;
}

// print the elements of the tuple
template <typename T>
void print3tuple(T t)
{
   auto tsz = tuple_size<decltype(t)>::value;
   if (tsz != 3)
      return;
   cout << get<0>(t) << " : " << get<1>(t) << " : " << get<2>(t) << endl;
}

// print a simple message
void message(const char *s) { cout << s << endl; }
void message(const char *s, const int n) { cout << s << ": " << n << endl; }

int main()
{
   // initializer list
   message("initializer pair list");
   pair<int, string> p1 = {47, "forty-seven"};
   printpair(p1);

   // default constructor
   message("default constructor");
   pair<int, string> p2(72, "seventy-two");
   printpair(p2);

   // from make_pair
   message("make_pair");
   pair<int, string> p3;
   p3 = make_pair(7, "seven");
   printpair(p3);

   // comparison operators
   message("p1 == p2", p1 == p2);
   message("p1 < p2", p1 < p2);
   message("p1 < p3", p1 < p3);
   message("p1 > p2", p1 > p2);
   message("p2 > p3", p2 > p3);
   cout << endl;

   // initializer list
   message("initializer tuple list");
   tuple<int, string, int> t1 = {47, "forty-seven", 1};
   print3tuple(t1);

   // default constructor
   message("default constructor");
   tuple<int, string, int> t2(72, "seventy-two", 2);
   print3tuple(t2);

   // make_tuple
   message("make_tuple");
   auto t3 = make_tuple(7, "seven", 3);
   print3tuple(t3);

   // comparison operators
   message("t1 == t2", t1 == t2);
   message("t1 < t2", t1 < t2);
   message("t1 < t3", t1 < t3);
   message("t1 > t2", t1 > t2);
   message("t2 > t3", t2 > t3);

   return 0;
}