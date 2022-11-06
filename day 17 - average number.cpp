#include <iostream>
using namespace std;
int main()
{
    int a;
    std::cin >> a;
    while (a--)
    {
        long size1, size2, mean, total = 0;
        cin >> size1 >> size2 >> mean;
        long arr[size1 + size2];
        for (long j = 0; j < size1; j++)
        {
            std::cin >> arr[j];
            total += arr[j];
        }
        long x = (mean * (size2 + size1)) - total;

        if (x % size2 == 0 && x > 0)
            std::cout << x / size2 << std::endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
