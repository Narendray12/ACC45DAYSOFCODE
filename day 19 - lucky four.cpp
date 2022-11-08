#include <iostream>
using namespace std;
int main()
{
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++)
    {
        int four, rem = 0, count = 0;
        cin >> four;
        while (four >= 1)
        {
            rem = four % 10;
            if (rem == 4)
            {
                count++;
            }
            four = four / 10;
        }
        cout << count << endl;
    }
    return 0;
}
