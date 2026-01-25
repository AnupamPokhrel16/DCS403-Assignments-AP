#include <iostream>
#include <cmath>

int power(int base, int exponent = 2)
{
    return std::pow(base, exponent);
}

int main()
{
    std::cout << "2 raised to power 2 = " << power(2) << std::endl;
    std::cout << "2 raised to power 3 = " << power(2, 3) << std::endl;
    std::cout << "5 raised to power 2 = " << power(5) << std::endl;
    std::cout << "5 raised to power 4 = " << power(5, 4) << std::endl;

    return 0;
}
