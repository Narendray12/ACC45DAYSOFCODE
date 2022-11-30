#include <iostream>
using namespace std;
void code()
{
    int n, odd = 0;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 1)
        {
            odd++;
        }
    }
    if (odd == 0 || odd % 2 == 1)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        code();
    }
    return 0;
}