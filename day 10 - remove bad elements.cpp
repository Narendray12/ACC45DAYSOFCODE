#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    std::cin >> a;
    while (a > 0)
    {
        int n, count = INT_MIN;
        cin >> n;
        int arr[n];
        unordered_map<int, int> m1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m1[arr[i]]++;
        }
        for (auto i : m1)
        {
            if (i.second > count)
            {
                count = i.second;
            }
        }
        std::cout << n - count << std::endl;
        a--;
    }
    return 0;
}
