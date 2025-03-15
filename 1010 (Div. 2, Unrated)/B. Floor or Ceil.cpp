#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

ll ok(ll x, int n, int m)
{
    while (m-- && x > 1)
        x = (x + 1) / 2;
    while (n-- && x > 0)
        x /= 2;
    return x;
}

ll ok2(ll x, int n, int m)
{
    while (n-- && x > 0)
        x /= 2;
    while (m-- && x > 1)
        x = (x + 1) / 2;
    return x;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        int n, m;
        cin >> x >> n >> m;

        cout << ok(x, n, m) << ' ' << ok2(x, n, m) << '\n';
    }
    return 0;
}