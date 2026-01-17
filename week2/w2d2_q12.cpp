#include <cmath>
#include <iostream>
#include <iomanip>

int main()
{
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
    std::cout << "Enter x1 y1 x2 y2: ";
    std::cin >> x1 >> y1 >> x2 >> y2;

    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = std::sqrt(dx * dx + dy * dy);

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Distance between points = " << distance << std::endl;
    return 0;
}
