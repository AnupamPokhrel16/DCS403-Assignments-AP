#include <iostream>

int main()
{
    int limit = 0;
    std::cout << "Enter limit: ";
    std::cin >> limit;

    if (limit < 2)
    {
        std::cout << "No primes." << std::endl;
        return 0;
    }

    std::cout << "Primes up to " << limit << ":" << std::endl;

    // Demonstrates nested loops, modulus, and break
    for (int n = 2; n <= limit; ++n)
    { // outer loop: candidate numbers
        bool isPrime = true;
        for (int d = 2; d * d <= n; ++d)
        { // inner loop: check divisors up to sqrt(n)
            if (n % d == 0)
            { // modulus to test divisibility
                isPrime = false;
                break; // break on first divisor found
            }
        }
        if (isPrime)
        {
            std::cout << n << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}
