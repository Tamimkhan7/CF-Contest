#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, m;
        cin >> x >> m;
        vector<ll> v;
        ll ans = 0;
        for (ll y = 1; y <= min(2LL * x, m); y++)
        {
            if ((x % (x ^ y) == 0) || (y % (x ^ y) == 0))
            {
                v.push_back(y);
                ans++;
            }
        }
        for (auto x : v)
            cout << x << ' ';
        cout << '\n';
        cout << ans << '\n';
    }
    return 0;
}