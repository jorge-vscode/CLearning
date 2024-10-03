#include <iostream>

int userInput()
{

    int input{};

    std::cout << "Input an integer: ";
    std::cin >> input;

    return input;
}

int doubleInteger(int x)
{

    return 2 * x;
}

int main()
{

    int number{userInput()};
    std::cout << "This number's double is: " << doubleInteger(number);

    return 0;
}
