#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int n, k, j;
        cin >> n;
        int arr1[n];
        for (j = 0; j < n; j++)
            cin >> arr1[j];
        cin >> k;
        int arr[k];
        for (j = 0; j < k; j++)
            cin >> arr[j];
        for (int x = 0; x < k; x++)
        {
            int h;
            for (h = 0; h < n; h++)
                if (arr1[h] == arr[x])
                    break;
            if (h < n)
            {
                n = n - 1;
                for (j = h; j < n; j++)
                    arr1[j] = arr1[j + 1];
            }
        }
        for (j = 0; j < n; j++)
            cout << arr1[j] << " ";
        cout << endl;
    }
    return 0;
}