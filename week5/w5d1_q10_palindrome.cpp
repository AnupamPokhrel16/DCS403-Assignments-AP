#include <iostream>
#include <string>
using namespace std;

// Q10. Check if a String is Palindrome (Recursive)
// Compare start and end characters; then recurse inward

bool isPalindrome(string s, int start, int end)
{
    if (start >= end)
    {
        return true; // Base case: reached middle or crossed
    }

    // Check if characters match
    if (s[start] != s[end])
    {
        return false;
    }

    // Recurse inward
    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
