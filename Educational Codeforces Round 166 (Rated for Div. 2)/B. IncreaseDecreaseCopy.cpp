#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int a[n + 1], b[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n + 1; i++)
        cin >> b[i];
    int x = b[n + 1];

    ll ans = 0;
    for (int i = 1; i <= n; i++)
        ans += abs(a[i] - b[i]);

    for (int i = 1; i <= n; i++)
    {
        if ((a[i] >= x and x >= b[i]) || (a[i] <= x and b[i] >= x))
        {
            cout << ans + 1 << '\n';
            return;
        }
    }
    ll res = 1e18;
    for (int i = 1; i <= n; i++)
    {
        ll d = abs(x - a[i]);
        ll d2 = abs(x - b[i]);
        res = min(d, min(d2, res));
    }
    // cout << d << ' ' << d2 << '\n';
    ans += res;
    cout << ans + 1 << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}