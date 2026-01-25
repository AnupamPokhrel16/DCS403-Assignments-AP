#include <iostream>

int main() {
    std::cout << "Enter integers (0 to stop): " << std::endl;

    int count = 0;

    while (true) {
        long long x;
        if (!(std::cin >> x)) {
            std::cout << "Invalid input. Stopping." << std::endl;
            break; // stop on invalid input
        }
        if (x == 0) {
            // sentinel value detected; terminate the loop
            break;
        }
        ++count; // only count values, no sum needed
    }

    std::cout << "Total numbers entered (excluding sentinel): " << count << std::endl;
    return 0;
}
