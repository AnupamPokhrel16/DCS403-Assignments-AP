#include <iostream>
#include <string>

void display(const std::string &msg)
{
    std::cout << "Message: " << msg << std::endl;
}

int main()
{
    std::string message = "C++ Functions are awesome!";

    display(message);
    display("Hello from constant reference!");

    return 0;
}
