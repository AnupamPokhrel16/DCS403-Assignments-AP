#include <iostream>
using namespace std;

// Q1. Print Numbers from 1 to N (Basic Recursion)
// Print numbers from 1 to N recursively

void printNumbers(int n)
{
    if (n == 0)
    {
        return; // Base case
    }
    printNumbers(n - 1); // Recursive call first
    cout << n << " ";    // Print during unwinding phase
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    printNumbers(n);
    cout << endl;

    return 0;
}
