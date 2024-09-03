#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        ll a = (x + k - 1) / k;
        ll b = (y + k - 1) / k;

        ll ans = max(a, b) * 2;
        if (a > b)
            cout << ans - 1 << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}