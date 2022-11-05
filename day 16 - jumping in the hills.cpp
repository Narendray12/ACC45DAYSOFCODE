#include <iostream>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    while (a--)
    {
        long long N, U, D, c = 1, i = 0;
        cin >> N >> U >> D;
        long long arr[N];
        bool p = true;
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }
        for (i = 0; i < N - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                if (arr[i + 1] - arr[i] <= U)
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            else if (arr[i] > arr[i + 1])
            {
                if (arr[i] - arr[i + 1] <= D)
                {
                    c++;
                }
                else if (arr[i] - arr[i + 1] > D && p)
                {
                    c++;
                    p = false;
                }
                else
                {
                    break;
                }
            }
            else
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
