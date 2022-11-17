#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    while (a--)
    {
        int size;
        cin >> size;
        map<int, int> map1;
        int arr[2 * size];
        for (int i = 0; i < 2 * size; i++)
        {
            cin >> arr[i];
            map1[arr[i]]++;
        }
        int z = 0;
        for (auto i : map1)
        {
            if (i.second >= 3)
            {
                z = 1;
                break;
            }
        }
        if (z == 1)
        {
            cout << "no" << endl;
        }
        else
            cout << "yes" << endl;
    }
    return 0;
}
