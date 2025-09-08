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
    ll a, b;
    cin >> a >> b;
    ll ans = -1;
    for (int k = 1; k * k <= 1e6; k++)
    {
        if (b % k == 0)
        {
            // show(k);
            ll a1 = a * k, b1 = b / k;
            if ((a1 + b1) % 2 == 0)
                ans = max(ans, a1 + b1);
            // show(ans);
            // show(a1), show(b1);
            ll k2 = b / k;
            if (k2 != k)
            {
                ll a2 = a * k2, b2 = b / k2;
                if ((a2 + b2) % 2 == 0)
                    ans = max(ans, a2 + b2);
            }
            // show(k2), show(k);
        }
    }
    cout << ans << '\n';
}

int main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
