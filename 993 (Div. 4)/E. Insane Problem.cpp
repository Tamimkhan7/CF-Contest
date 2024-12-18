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
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        ll ans = 0;
        for (ll p = 1; p <= r2; p *= k)
        {
            int r = r2 / p;
            int l = (l2 - 1) / p + 1;
            ll res = max(0, min(r1, r) - max(l1, l) + 1);
            // show(r), show(l), show(res);
            ans += res;
        }
        cout << ans << '\n';
    }
    return 0;
}