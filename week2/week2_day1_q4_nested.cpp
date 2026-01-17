#include <iostream>

int main()
{
    int n = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n > 0)
    {
        if (n % 2 == 0)
        {
            std::cout << "Positive and Even" << std::endl;
        }
        else
        {
            std::cout << "Positive and Odd" << std::endl;
        }
    }
    else if (n < 0)
    {
        std::cout << "Negative" << std::endl;
    }
    else
    {
        std::cout << "Zero" << std::endl;
    }

    return 0;
}
