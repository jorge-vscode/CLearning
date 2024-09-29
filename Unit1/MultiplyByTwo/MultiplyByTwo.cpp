#include <iostream>

int main()
{
    //Declares an uninitialized variable.
    int x{};


    //Outputs first line and asks for a value fot x.
    std::cout<< "Enter an integer: ";
    std::cin >> x;

    //Outputs x's double.
    std::cout<< "Double that number is: " << x * 2 << '\n';

    //Outputs x's triple.
    std::cout<< "Triple that number is: " << x * 3 << '\n';

    return 0;
}
