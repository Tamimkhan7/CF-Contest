

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

void solve()
{
    ll n;
    cin >> n;

    vector<ll> pw, profit;

    ll val = 1;
    int x = 0;
    while (val <= n)
    {
        pw.push_back(val);
        ll pr = val * 3;
        if (x > 0)
            pr += x * (val / 3);
        profit.push_back(pr);

        if (val > LLONG_MAX / 3)
            break;
        val *= 3;
        x++;
    }

    ll ans = 0;
    for (int i = pw.size() - 1; i >= 0; i--)
    {
        ll count = n / pw[i];
        ans += count * profit[i];
        n -= count * pw[i];
    }

    cout << ans << '\n';
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