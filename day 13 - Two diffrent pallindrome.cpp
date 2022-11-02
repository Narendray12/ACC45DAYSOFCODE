#include <iostream>
using namespace std;

int main()
{
    long a;
    std::cin >> a;
    while (a > 0)
    {
        long long size1, size2;
        cin >> size1 >> size2;
        if (size1 == 1 || size2 == 1)
            std::cout << "no" << std::endl;
        else if (size1 == size2 && size1 % 2 == 0 && size2 % 2 == 0)
            std::cout << "YES" << std::endl;
        else if (size1 % 2 == 0 && size2 % 2 == 0)
            std::cout << "YES" << std::endl;
        else if ((size1 % 2 == 0 && size2 % 2 == 1) || (size2 % 2 == 0 && size1 % 2 == 1))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
        a--;
    }
    return 0;
}
