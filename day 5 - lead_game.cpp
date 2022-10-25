#include <iostream>
using namespace std;
int main()
{
    int a, lead = 0, winner = 0;
    cin >> a;
    int p1[a], p2[a], x = 0, y = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> p1[i] >> p2[i];
    }
    for (int i = 0; i < a; i++)
    {
        x += p1[i];
        y += p2[i];
        if (abs(x - y) > lead)
        {
            lead = abs(x - y);
            winner = x >= y ? 1 : 2;
        }
    }
    cout << winner << " " << lead;
    return 0;
}