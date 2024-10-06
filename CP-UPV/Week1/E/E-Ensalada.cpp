#include <bits/stdc++.h>

int main()
{
    long long int Ensalada[3];

    std::cin >> Ensalada[0] >> Ensalada[1] >> Ensalada[2];
    if (Ensalada[2] >= 1 and (Ensalada[0] >= 1 or Ensalada[1] >= 1) and Ensalada[0] >= 1 and Ensalada[0] + Ensalada[1] + Ensalada[2] > 1)
    {
        std::cout << Ensalada[0] * 5 + Ensalada[1] * 7 + (Ensalada[2] - 1) * 13;
    }
    else if (Ensalada[1] >= 1 and Ensalada[0] >= 1 and Ensalada[0] + Ensalada[1] + Ensalada[2] > 1)
    {
        std::cout << Ensalada[0] * 5 + (Ensalada[1] - 1) * 7 + (Ensalada[2]) * 13;
    }
    else if (Ensalada[0] >= 2 and Ensalada[0] >= 1 and Ensalada[0] + Ensalada[1] + Ensalada[2] > 1)
    {
        std::cout << (Ensalada[0] - 1) * 5 + (Ensalada[1]) * 7 + (Ensalada[2]) * 13;
    }
    else
    {
        std::cout << Ensalada[0] * 5 + (Ensalada[1]) * 7 + (Ensalada[2]) * 13;
    }
    return 0;
}
