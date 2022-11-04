#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll res = 0;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second > 1)
        {
            ll t = i.second;
            res += t * (t - 1) / 2;
        }
    }
    cout << res << endl;
}
int main()
{
    ll a;
    cin >> a;
    while (a--)
    {
        solve();
    }
    return 0;
}