#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << a << " is greater" << std::endl;
    }
    else if (b > a)
    {
        std::cout << b << " is greater" << std::endl;
    }
    else
    {
        std::cout << "Both numbers are equal" << std::endl;
    }

    return 0;
}
