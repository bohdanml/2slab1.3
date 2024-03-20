#pragma once

#include <string>

class Rational {
private:
    int a; 
    int b; 

    void Reduce(); 
    int GCD(int x, int y); 

public:
    Rational(); 
    Rational(int numerator, int denominator); 

    
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int numerator);
    void setDenominator(int denominator);

   
    void Init(int numerator, int denominator);

   
    void Read();

  
    void Display() const;

   
    std::string toString() const;

    
    double value() const;

    
    Rational div(const Rational& other) const;
    bool equal(const Rational& other) const;
    bool greater(const Rational& other) const;
    bool less(const Rational& other) const;
};