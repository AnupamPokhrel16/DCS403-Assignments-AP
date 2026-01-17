#include <iostream>

int main()
{
    int x = 0;
    int y = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    int smaller = (x < y) ? x : y;
    std::cout << "Smaller number: " << smaller << std::endl;

    return 0;
}
