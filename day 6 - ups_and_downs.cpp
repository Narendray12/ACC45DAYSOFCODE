#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a > 0)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < size - 1; j++)
        {
            if (j % 2 == 0)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
            else if (j % 2 == 1)
            {
                if (arr[j] < arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        a--;
    }

    return 0;
}