#include <iostream>

int main()
{
    int n = 0;
    std::cout << "Enter N: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    std::cout << "Sum of first " << n << " natural numbers = " << sum << std::endl;
    return 0;
}
