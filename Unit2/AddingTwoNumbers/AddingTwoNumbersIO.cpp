#include "AddingTwoNumbersIO.h"
#include <iostream>

int readNumber()
{
    std::cout << "Input a number: ";

    int x{};
    std::cin  >> x;

    return x;
}

void writeNumber(int z)
{
    std::cout << "The two numbers sum is: " << z;
}
