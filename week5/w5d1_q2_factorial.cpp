#include <iostream>
using namespace std;

// Q2. Find Factorial of a Number
// Returns n! using recursion
// n! = n * (n-1)!

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // Base case: 0! = 1, 1! = 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}
