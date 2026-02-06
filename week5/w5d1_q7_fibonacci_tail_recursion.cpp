#include <iostream>
using namespace std;

// Q7. Tail-Recursive Fibonacci
// Rewrite Fibonacci using tail recursion
// Carry two parameters: current and next Fibonacci number
// Fib(0) = 0, Fib(1) = 1

long long fibonacciTail(int n, long long current = 0, long long next = 1)
{
    if (n == 0)
    {
        return current; // Base case
    }
    return fibonacciTail(n - 1, next, current + next); // Tail recursive call
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << fibonacciTail(n) << endl;

    return 0;
}
