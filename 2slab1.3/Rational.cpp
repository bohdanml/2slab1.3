#include "rational.h"
#include <iostream>

Rational::Rational() : a(0), b(1) {}

Rational::Rational(int numerator, int denominator) : a(numerator), b(denominator) {
    Reduce();
}

void Rational::Reduce() {
    int gcd = GCD(a, b);
    a /= gcd;
    b /= gcd;
}

int Rational::GCD(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int Rational::getNumerator() const {
    return a;
}

int Rational::getDenominator() const {
    return b;
}

void Rational::setNumerator(int numerator) {
    a = numerator;
    Reduce();
}

void Rational::setDenominator(int denominator) {
    if (denominator != 0) {
        b = denominator;
        Reduce();
    }
    else {
        std::cerr << "Error: Denominator cannot be zero." << std::endl;
    }
}

void Rational::Init(int numerator, int denominator) {
    a = numerator;
    if (denominator != 0) {
        b = denominator;
    }
    else {
        std::cerr << "Error: Denominator cannot be zero." << std::endl;
    }
    Reduce();
}

void Rational::Read() {
    std::cout << "Enter numerator: ";
    std::cin >> a;
    std::cout << "Enter denominator: ";
    std::cin >> b;
    Reduce();
}

void Rational::Display() const {
    std::cout << a << "/" << b;
}

std::string Rational::toString() const {
    return std::to_string(a) + "/" + std::to_string(b);
}

double Rational::value() const {
    return static_cast<double>(a) / b;
}

Rational Rational::div(const Rational& other) const {
    return Rational(a * other.b, b * other.a);
}

bool Rational::equal(const Rational& other) const {
    return (a == other.a) && (b == other.b);
}

bool Rational::greater(const Rational& other) const {
    return (a * other.b > other.a * b);
}

bool Rational::less(const Rational& other) const {
    return (a * other.b < other.a * b);
}