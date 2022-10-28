#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int k, o = 0;
        cin >> k;
        int arr1[k], arr2[k];
        for (int j = 0; j < k; j++)
        {
            cin >> arr1[j];
        }
        for (int l = 0; l < k; l++)
        {
            cin >> arr2[l];
        }
        for (int n = 0; n < k; n++)
        {
            if (arr1[n] != arr2[n])
            {
                o++;
            }
        }
        if (o == k)
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}