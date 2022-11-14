#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational 
{
   public:
      Rational(int numerator = 0, int denominator = 1);
      Rational(const Rational & rhs);
      ~Rational();
      int getNumerator() const;
      int getDenominator() const;
      Rational & operator = (const Rational &rhs);
      // Rational operator + (const Rational &rhs) const;
      Rational operator - (const Rational &rhs) const;
      Rational operator * (const Rational &rhs) const;
      Rational operator / (const Rational &rhs) const;

   private:
      int _numerator = 0;
      int _denominator = 1;
};

#endif