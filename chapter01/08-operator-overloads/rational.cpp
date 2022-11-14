#include "rational.h"


Rational::Rational(int numerator, int denominator)
   : _numerator(numerator), _denominator(denominator) { }

// Copy constructor
Rational::Rational(const Rational & rhs)
   : _numerator(rhs._numerator), _denominator(rhs._denominator) { }

Rational::~Rational() 
{ 
   _numerator = 0;
   _denominator = 1;
}

int Rational::getNumerator() const
{
   return _numerator;
}

int Rational::getDenominator() const
{
   return _denominator;
}

Rational & Rational::operator = (const Rational & rhs)
{
   if (this != &rhs)
   {
      _numerator = rhs._numerator;
      _denominator = rhs._denominator;
   }
   return *this;
}

Rational Rational::operator + (const Rational &rhs) const
{
   return Rational((_numerator * rhs._denominator) + (_denominator * rhs._numerator), _denominator * rhs._denominator);
}

Rational Rational::operator - (const Rational &rhs) const
{
   return Rational((_numerator * rhs._denominator) - (_denominator * rhs._numerator), _denominator * rhs._denominator);
}

Rational Rational::operator * (const Rational &rhs) const
{
   return Rational(_numerator *rhs._numerator, _denominator * rhs._denominator);
}

Rational Rational::operator / (const Rational &rhs) const
{
   return Rational(_numerator *rhs._denominator, _denominator * rhs._numerator);
}
