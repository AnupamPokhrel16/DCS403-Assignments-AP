#include <cmath>
#include <iostream>
#include <iomanip>

int main()
{
    double a = 0.0, b = 0.0, c = 0.0;
    std::cout << "Enter coefficients a b c: ";
    std::cin >> a >> b >> c;

    if (a == 0.0)
    {
        std::cout << "Coefficient 'a' must not be zero for a quadratic equation." << std::endl;
        return 0;
    }

    double D = b * b - 4 * a * c;
    std::cout << std::fixed << std::setprecision(3);

    if (D > 0)
    {
        double x1 = (-b + std::sqrt(D)) / (2 * a);
        double x2 = (-b - std::sqrt(D)) / (2 * a);
        std::cout << "Roots are real and distinct: " << x1 << " and " << x2 << std::endl;
    }
    else if (D == 0)
    {
        double x = -b / (2 * a);
        std::cout << "Roots are real and equal: " << x << std::endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = std::sqrt(-D) / (2 * a);
        std::cout << "Roots are imaginary: " << realPart << " + " << imagPart << "i and "
                  << realPart << " - " << imagPart << "i" << std::endl;
    }
    return 0;
}
