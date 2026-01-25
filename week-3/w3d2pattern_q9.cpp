#include <iostream>

long long nCr(int n, int r)
{
    if (r > n - r)
    {
        r = n - r;
    }
    long long result = 1;
    for (int i = 0; i < r; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main()
{
    int n = 0;
    std::cout << "Enter number of rows: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int sp = 0; sp < n - i - 1; ++sp)
        {
            std::cout << " ";
        }
        for (int j = 0; j <= i; ++j)
        {
            std::cout << nCr(i, j);
            if (j < i)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
