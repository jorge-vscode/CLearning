#include <iostream>

int main()
{
    // Declares two uninitialized variables.
    int x1{};
    int x2{};

    // Outputs first line and asks for a value for x1.
    std::cout << "Enter an integer: ";
    std::cin >> x1;

    // Outputs second line and asks for a value for x2.
    std::cout << "Enter another integer: ";
    std::cin >> x2;

    // Adds x1 and x2.
    std::cout << x1 << " + " << x2 << " is " << x1 + x2 << ".\n";

    // Subtracts x2 from x1.
    std::cout << x1 << " - " << x2 << " is " << x1 - x2 << ".\n";

    return 0;
}
