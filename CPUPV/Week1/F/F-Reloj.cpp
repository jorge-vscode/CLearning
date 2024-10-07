#include <bits/stdc++.h>

int main()
{
    unsigned long long int x{};
    unsigned long long int hours{12};
    unsigned long long int minutes{0};
    std::cin >> x;

    if (x / 60 > 0)
    {
        if (x % 60 == 0)
        {
            hours = hours + x / 60;
        }
        else
        {
            hours = hours + x / 60;
            minutes = minutes + x % 60;
        }
    }
    else
    {
        minutes = minutes + x;
    }
    if (hours >= 24)
    {
        hours = hours % 24;
    }
    if (minutes >= 60)
    {
        minutes = minutes % 60;
    }
    if (hours < 10 and minutes >= 10)
    {
        std::cout << "0" << hours << ":" << minutes;
    }
    else if (minutes < 10 and hours >= 10)
    {
        std::cout << hours << ":" << "0" << minutes;
    }
    else if (hours < 10 and minutes < 10)
    {
        std::cout << "0" << hours << ":" << "0" << minutes;
    }
    else
    {
        std::cout << hours << ":" << minutes;
    }
    return 0;
}
