#include <iostream>

int main()
{
    int n = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }

    std::cout << "Factorial of " << n << " = " << factorial << std::endl;
    return 0;
}
