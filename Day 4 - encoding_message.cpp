#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int size;
        cin >> size;
        char str[size];
        for (int j = 0; j < size; j++)
        {
            cin >> str[j];
        }
        for (int k = 0; k < size; k++)
        {
            if (k % 2 == 1)
            {
                int temp;
                temp = str[k - 1];
                str[k - 1] = str[k];
                str[k] = temp;
            }
        }
        for (int k = 0; k < size; k++)
        {
            int b = 122 - str[k];
            int d = 25 - b;
            str[k] = 'z';
            str[k] = str[k] - d;
        }
        for (int j = 0; j < size; j++)
        {
            cout << str[j] << endl;
        }
    }

    return 0;
}