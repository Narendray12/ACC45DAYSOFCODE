#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    while (a--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k && i != n - 1)
            {
                z = 1;
            }
        }
        if (n == 1 && k == arr[0])
            cout << "yes" << endl;
        else if (z == 0)
        {
            cout << "no" << endl;
        }
        else
            cout << "yes" << endl;
    }
    return 0;
}
