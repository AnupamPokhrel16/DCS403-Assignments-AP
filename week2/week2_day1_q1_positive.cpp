#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0)
    {
        std::cout << "Positive number" << std::endl;
    }
    else
    {
        std::cout << "Not a positive number" << std::endl;
    }

    return 0;
}
