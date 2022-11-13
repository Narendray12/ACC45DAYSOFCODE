#include <iostream>
using namespace std;
int fun(string s)
{
    int max1 = 0;
    int bal = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            bal++;
        else
            bal--;
        max1 = max(max1, bal);
    }
    return max1;
}
int main()
{
    int a;
    std::cin >> a;
    while (a--)
    {
        string s;
        cin >> s;
        int x = fun(s);
        for (int i = 0; i < x; i++)
        {
            std::cout << "(";
        }
        for (int i = 0; i < x; i++)
        {
            std::cout << ")";
        }
        std::cout << std::endl;
    }
    return 0;
}
