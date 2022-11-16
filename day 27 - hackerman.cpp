#include <iostream>
using namespace std;

int main()
{
    int x;
    std::cin >> x;
    while (x > 0)
    {
        int a, b, count = 0;
        std::cin >> a >> b;
        int c = a + b;
        for (int i = 1; i <= c; i++)
        {
            if (c % i == 0)
                count++;
        }
        if (count == 2)
            std::cout << "alice" << std::endl;
        else
            std::cout << "bob" << std::endl;
        x--;
    }
    return 0;
}
