#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        string s;
        int c = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u') && (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'o' || s[i + 1] == 'i' || s[i + 1] == 'u') && (s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'o' || s[i + 2] == 'i' || s[i + 2] == 'u'))
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            cout << "happy" << endl;
        }
        else
        {
            cout << "sad" << endl;
        }
    }
    return 0;
}
