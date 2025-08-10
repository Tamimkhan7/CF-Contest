#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;

    ll g = __gcd(a, b);
    if (a / g <= k && b / g <= k)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
