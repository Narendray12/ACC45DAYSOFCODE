#include <iostream>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    while (a > 0)
    {
        int n;
        cin >> n;
        long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] + arr[j] >= arr[i] * arr[j])
                {
                    count++;
                }
            }
        }
        std::cout << count << std::endl;
        a--;
    }
    return 0;
}
