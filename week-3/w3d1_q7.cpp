#include <iostream>

int main()
{
    std::cout << "Multiplication tables (1 to 10):" << std::endl;
    std::cout << std::endl;

    for (int num = 1; num <= 10; ++num)
    {
        std::cout << "Table of " << num << ":" << std::endl;
        for (int mult = 1; mult <= 10; ++mult)
        {
            std::cout << num << " x " << mult << " = " << (num * mult) << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
