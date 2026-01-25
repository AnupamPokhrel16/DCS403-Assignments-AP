#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin >> std::ws, s);

    bool isPalindrome = true;
    int n = static_cast<int>(s.size());

    // Demonstrates for loop, string indexing, and break
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break; // break as soon as a mismatch is found
        }
    }

    if (isPalindrome) {
        std::cout << "It is a palindrome." << std::endl;
    } else {
        std::cout << "It is not a palindrome." << std::endl;
    }

    return 0;
}
