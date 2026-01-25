#include <iostream>

void square(int n)
{
    std::cout << "Square of " << n << " = " << (n * n) << std::endl;
}

int main()
{
    int num = 5;
    std::cout << "Before function call: num = " << num << std::endl;

    square(num);

    std::cout << "After function call: num = " << num << std::endl;
    return 0;
}
