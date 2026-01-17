#include <cmath>
#include <iostream>

int main()
{
    double a = 0.0;
    double b = 0.0;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    double maximum = std::fmax(a, b);
    double minimum = std::fmin(a, b);

    std::cout << "Maximum = " << maximum << '\n';
    std::cout << "Minimum = " << minimum << '\n';
    return 0;
}
