#pragma once

#include <iostream>
#include <vector>

class Fraction {
private:
    int _numerator, _denominator;
public:
    Fraction(int numerator, int denominator);

    int getNum() const;
    int getDen() const;

    Fraction operator=(Fraction& fraction);
    Fraction operator+(Fraction& fraction) ;
    Fraction operator-(Fraction& fraction) ;
    Fraction operator*(Fraction& fraction) ;
    Fraction operator/(Fraction& fraction) ;

    void getDecimal();
};

Fraction createFraction();
void addFractions(std::vector<Fraction>& fractions);
void someCalculations(std::vector<Fraction>& fractions);