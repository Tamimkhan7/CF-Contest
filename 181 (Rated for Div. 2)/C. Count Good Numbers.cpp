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

ll count_bad(ll x)
{
    ll cnt = 0;
    ll p[] = {2, 3, 5, 7};
    for (int m = 1; m < (1 << 4); ++m)
    {
        ll lcm = 1;
        int bt = 0;
        for (int i = 0; i < 4; ++i)
        {
            if (m >> i & 1)
            {
                lcm *= p[i];
                bt++;
            }
        }
        if (lcm > x)
            continue;
        if (bt % 2 == 1)
            cnt += x / lcm;
        else
            cnt -= x / lcm;
    }
    return cnt;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = r - l + 1;
        ll bad = count_bad(r) - count_bad(l - 1);
        cout << ans - bad << '\n';
    }
}

int32_t main()
{
    MTK;
    solve();
    return 0;
}
