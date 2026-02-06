#include <iostream>
using namespace std;

// Q5. Tail-Recursive Power Function
// Compute a^b using tail recursion
// Carry the intermediate result as an argument in each recursive call

long long power(int a, int b, long long result = 1)
{
    if (b == 0)
    {
        return result; // Base case
    }
    return power(a, b - 1, result * a); // Tail recursive call
}

int main()
{
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter exponent: ";
    cin >> b;

    cout << power(a, b) << endl;

    return 0;
}
