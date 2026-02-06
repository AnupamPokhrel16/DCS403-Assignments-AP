#include <iostream>
using namespace std;

// Q3. Sum of Digits (Recursive)
// Calculate sum of all digits in a number
// Isolate last digit and recursively process remaining number

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0; // Base case
    }
    return (n % 10) + sumOfDigits(n / 10); // Last digit + recursion
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << sumOfDigits(n) << endl;

    return 0;
}
