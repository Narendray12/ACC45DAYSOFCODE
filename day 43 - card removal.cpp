#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        map<int, int> m;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            m[arr[i]]++;
        int k = 0;
        for (auto i : m)
        {
            if (k < i.second)
            {
                k = i.second;
            }
        }
        std::cout << n - k << std::endl;
    }
    return 0;
}
