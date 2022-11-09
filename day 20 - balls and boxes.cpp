#include <iostream>
using namespace std;
int main()
{
    int a;
    std::cin >> a;
    while (a > 0)
    {
        int sum = 0, n, k;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            sum = sum + i;
        if (n >= sum)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
        a--;
    }
    return 0;
}