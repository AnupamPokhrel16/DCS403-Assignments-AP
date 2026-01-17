#include <cmath>
#include <iostream>
#include <iomanip>

int main()
{
    double num = 0.0;
    double base = 0.0;
    double exponent = 0.0;

    std::cout << "Enter a number for sqrt/abs: ";
    std::cin >> num;
    std::cout << "Enter base and exponent for power (e.g., 2 3): ";
    std::cin >> base >> exponent;

    double squareRoot = std::sqrt(std::fabs(num));
    double powerValue = std::pow(base, exponent);
    double absValue = std::fabs(num);

    std::cout << "Square root of " << std::fabs(num) << " = " << squareRoot << '\n';
    std::cout << base << " raised to power " << exponent << " = " << powerValue << '\n';
    std::cout << "Absolute value of " << num << " = " << absValue << '\n';
    return 0;
}
