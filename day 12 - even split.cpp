#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    while (a > 0)
    {
        int size;
        std::cin >> size;
        string arr;
        std::cin >> arr;
        if (size <= 2)
            std::cout << arr << std::endl;
        else
        {
            sort(arr.begin(), arr.end());
            std::cout << arr << std::endl;
        }
        a--;
    }
    return 0;
}