#include <iostream>

int main()
{
    int n = 0;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
