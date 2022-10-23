#include <iostream>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    while (a > 0)
    {
        long long n, even = 0;
        std::cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
        }
        if (even == n)
            std::cout << 0 << std::endl;
        else
        {
            std::cout << even << std::endl;
        }
        a--;
    }
    return 0;
}
