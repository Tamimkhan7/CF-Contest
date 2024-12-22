#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    ll x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(all(a));
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {

        ll p = sum - y - a[i];
        ll q = sum - x - a[i];

        int l = lower_bound(a.begin(), a.begin() + i, p) - a.begin();
        int r = upper_bound(a.begin(), a.begin() + i, q) - a.begin() - 1;
        // show(l), show(r);
        if (l <= r)
            ans += (r - l + 1);
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
