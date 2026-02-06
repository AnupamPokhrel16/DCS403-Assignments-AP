#include <iostream>
using namespace std;

// Q6. Fibonacci Number (Recursive)
// Compute the nth Fibonacci number
// Fib(n) = Fib(n-1) + Fib(n-2)
// Fib(0) = 0, Fib(1) = 1

long long fibonacci(int n)
{
    if (n == 0)
    {
        return 0; // Base case: Fib(0) = 0
    }
    if (n == 1)
    {
        return 1; // Base case: Fib(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}
