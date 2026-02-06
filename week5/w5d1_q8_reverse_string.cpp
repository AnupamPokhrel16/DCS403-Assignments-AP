#include <iostream>
#include <string>
using namespace std;

// Q8. Reverse a String Using Recursion
// Swap characters at two indices, then recursively move inward

void reverseString(string &s, int start, int end)
{
    if (start >= end)
    {
        return; // Base case: crossed or reached middle
    }
    // Swap characters
    swap(s[start], s[end]);
    // Recursive call with indices moved inward
    reverseString(s, start + 1, end - 1);
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    reverseString(s, 0, s.length() - 1);

    cout << s << endl;

    return 0;
}
