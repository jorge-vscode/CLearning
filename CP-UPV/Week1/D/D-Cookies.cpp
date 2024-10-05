#include <bits/stdc++.h>

int main()
{
    int Cookies[2];

    std::cin >> Cookies[0] >> Cookies[1];

    if (Cookies[0] % Cookies[1] != 0)
    {
        std::cout << "NO";
        return 0;
    }
    std::cout << "YES";
    return 0;
}
