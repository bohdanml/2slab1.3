#include <iostream>
#include "rational.h"

int main() {
    Rational r1;
    Rational r2;

    std::cout << "Enter numerator for r1: ";
    int numerator1;
    std::cin >> numerator1;

    std::cout << "Enter denominator for r1: ";
    int denominator1;
    std::cin >> denominator1;

    r1.Init(numerator1, denominator1);

    std::cout << "Enter numerator for r2: ";
    int numerator2;
    std::cin >> numerator2;

    std::cout << "Enter denominator for r2: ";
    int denominator2;
    std::cin >> denominator2;

    r2.Init(numerator2, denominator2);

    std::cout << "r1: ";
    r1.Display();
    std::cout << std::endl;

    std::cout << "r2: ";
    r2.Display();
    std::cout << std::endl;

    std::cout << "r1 value: " << r1.value() << std::endl;
    std::cout << "r2 value: " << r2.value() << std::endl;

    Rational r3 = r1.div(r2);
    std::cout << "r1 / r2 = ";
    r3.Display();
    std::cout << std::endl;

    std::cout << "r1 equal r2: " << std::boolalpha << r1.equal(r2) << std::endl;
    std::cout << "r1 greater than r2: " << std::boolalpha << r1.greater(r2) << std::endl;
    std::cout << "r1 less than r2: " << std::boolalpha << r1.less(r2) << std::endl;

    return 0;
}
