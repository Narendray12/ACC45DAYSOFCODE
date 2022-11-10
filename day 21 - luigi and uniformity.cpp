#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    while (a > 0)
    {
        int n, c = 0, x = 0;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[0] == arr[i])
            {
            }
            else if (arr[i] % arr[0] == 0)
            {
                c++;
            }
            else
            {
                x = 1;
                break;
            }
        }
        if (x == 1)
        {
            std::cout << n << std::endl;
        }
        else
            std::cout << c << std::endl;
        a--;
    }
    return 0;
}
