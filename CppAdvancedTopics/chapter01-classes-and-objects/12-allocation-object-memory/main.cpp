// #include <cstdio>
#include <iostream>

using namespace std;

class Num
{
   public:
      Num( int value = 0);
      ~Num();
      int getA() const { return _a; }
      int getB() const { return _b; }
      int getC() const { return _c; }

   private:
      int _a = 0;
      int _b = 0;
      int _c = 0;
};

Num::Num(int value)
   : _a(value), _b(value + 1), _c(value + 2)
{
   cout << "Num constructor" << endl;
}

Num::~Num()
{
   cout << "Num destructor" << endl;
}

int main()
{
   try
   {
      Num* num1 = new Num;
      cout << "num1: " << num1->getA() << ", " << num1->getB() << ", "  << num1->getC() << endl;
      delete num1;

      cout << endl;

      Num* num2 = new Num[5];
      cout << "num2: " << num2->getA() << ", " << num2->getB() << ", "  << num2->getC() << endl;
      delete [] num2;
   }
   catch(const std::exception& e)
   {
      cout << "new Num has been failed" << endl;
      std::cerr << e.what() << '\n';
   }

   Num* num3 = new Num;
   if(num3 != nullptr)
   {
      cout << "num3: " << num3->getA() << ", " << num3->getB() << ", "  << num3->getC() << endl;
      delete num3;
   }

   return 0;
}