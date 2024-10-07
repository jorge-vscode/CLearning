#include <iostream>
#include <iomanip>

int main()
{
    long double n1{};
    long double n2{};
    char operar{};
    long double result{};

    std::cin >> n1 >> operar >> n2;

    if (operar == '+')
    {
        result = n1 + n2;
        std::cout << result;
    }
    else if (operar == '-')
    {
        result = n1 - n2;
        std::cout << result;
    }
    else if (operar == '*')
    {
        result = n1 * n2;
        std::cout << result;
    }
    else if (operar == '/')
    {
        if (n2 == 0)
        {
            std::cout<<"ERROR";
            return 0;
        }
        else
        {
            result = n1 / n2;
            std::cout << std::fixed << std::setprecision(2) << result;
        }
    }
    return 0;
}
