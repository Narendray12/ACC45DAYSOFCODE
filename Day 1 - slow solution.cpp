#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    std::cin >> a;
    while (a > 0)
    {
        int maxN, sumN, maxT, count = 0, total = 0, z = 0;
        cin >> maxT >> maxN >> sumN;
        int x = sumN;
        for (int i = 1; i <= maxT; i++)
        {
            x = x - maxN;
            count++;
            if (x <= 0)
            {
                break;
            }
        }
        int y = 0;
        for (int j = 1; j <= count; j++)
        {
            z += maxN;
            if (sumN - z < maxN)
            {
                y = pow(sumN - (z - maxN), 2);
            }
            else
            {
                y = pow(maxN, 2);
            }
            total += y;
        }
        std::cout << total << std::endl;
        a--;
    }
    return 0;
}
