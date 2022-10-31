#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0;
    cin >> a;
    int arr[a][100], arr1[a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        for (int k = 0; k < i; k++)
        {
            arr1[k] = 0;
            arr1[k] = sum;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr1[i] >= arr1[j])
            {
                sum = arr1[i];
            }
            else if (arr1[i] < arr1[j])
            {
                sum = arr1[i + 1];
            }
        }
    }
    cout << sum;
}