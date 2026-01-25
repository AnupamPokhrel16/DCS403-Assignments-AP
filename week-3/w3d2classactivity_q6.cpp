#include <iostream>

inline int cube(int n)
{
    return n * n * n;
}

int main()
{
    std::cout << "Cube of 2 = " << cube(2) << std::endl;
    std::cout << "Cube of 3 = " << cube(3) << std::endl;
    std::cout << "Cube of 5 = " << cube(5) << std::endl;

    return 0;
}
