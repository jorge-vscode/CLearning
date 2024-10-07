#include <bits/stdc++.h>

int main()
{
    int N1, N2, N3;
    std::vector<char> vocals = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    std::cin >> N1;
    std::vector<int> S1(N1);
    for (int i = 0; i < N1; i++)
    {
        std::cin >> S1[i];
        S1[i] = S1[i] * 2;
    }
    std::cin >> N2;
    std::vector<char> S2(N2);
    for (int i = 0; i < N2; i++)
    {
        std::cin >> S2[i];
        S2[i] = toupper(S2[i]);
    }
    std::cin >> N3;
    std::vector<std::string> S3(N3);
    for (int i = 0; i < N3; i++)
    {
        std::cin >> S3[i];
        for (int j = 0; j < S3[i].size(); j++)
        {
            if (std::count(vocals.begin(), vocals.end(), S3[i][j]))
            {
                S3[i][j] = '0';
            }
        }
    }
    for (int i : S1)
    {
        std::cout << i << " ";
    }
    std::cout << '\n';
    for (char i : S2)
    {
        std::cout << i << " ";
    }
    std::cout << '\n';
    for (std::string i : S3)
    {
        std::cout << i << " ";
    }
    return 0;
}
