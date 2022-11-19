#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    while (a > 0)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            char s[n];
            int count =0;
            for (int i = 0; i < n; i++)
            {
                cin>>s[i];
            }
            sort(s,s+n);
            cout<<n<<endl;
            for (int i = 0; i < n-1; i+=2)
            {
                if(s[i]==s[i+1]);
                    count++;
            }
            if (count == n / 2)
                std::cout << "yes" << std::endl;
            else
                std::cout << "no" << std::endl;
        }
        else
        {
            std::cout << "no" << std::endl;
        }
        a--;
    }
    return 0;
}
