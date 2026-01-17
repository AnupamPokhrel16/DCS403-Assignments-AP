#include <cmath>
#include <iostream>
#include <iomanip>

int main()
{
    double angleRad = 0.0;
    std::cout << "Enter angle in radians (e.g., 3.14159/4): ";
    std::cin >> angleRad;

    double s = std::sin(angleRad);
    double c = std::cos(angleRad);
    double t = std::tan(angleRad);

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "sin = " << s << '\n';
    std::cout << "cos = " << c << '\n';
    std::cout << "tan = " << t << '\n';
    return 0;
}
