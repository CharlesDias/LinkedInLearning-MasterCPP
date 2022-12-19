// template-variable.cpp by Bill Weinman <http://bw.org/>
// created 2018-09-08
#include <iostream>
using namespace std;

template <typename T>
T pi = T(3.1415926535897932385L);

template <typename T>
T area_of_circle(const T & r)
{
   return r * r * pi<T>;
}

int main()
{
   cout.precision(20);
   cout << "pi<int>:         " << pi<int> << endl;
   cout << "pi<float>:       " << pi<float> << endl;
   cout << "pi<double>:      " << pi<double> << endl;
   cout << "pi<long double>: " << pi<long double> << endl;

   cout << "pi is " <<  pi<int> << " and area_of_circle is " << area_of_circle<int>(3) << endl;
   cout << "pi is " <<  pi<long double> << " and area_of_circle is " << area_of_circle<long double>(3) << endl;

   return 0;
}