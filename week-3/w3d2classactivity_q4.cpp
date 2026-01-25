#include <iostream>
#include <iomanip>

double area(double radius)
{
    return 3.14159 * radius * radius;
}

double area(double length, double width)
{
    return length * width;
}

int main()
{
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Area of circle with radius 5 = " << area(5.0) << std::endl;
    std::cout << "Area of rectangle with length 4 and width 6 = " << area(4.0, 6.0) << std::endl;

    return 0;
}
