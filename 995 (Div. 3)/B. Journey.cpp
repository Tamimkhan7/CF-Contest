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
ll n, a, b, c;
bool ok(int x)
{
    ll sum = 0;
    sum += 1LL * a * x, sum += 1LL * b * x, sum += 1LL * c * x;
    return sum >= n;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b >> c;
        int l = 1, r = n, ans = 0;
        while (l <= r)
        {
            int mid = (1LL * l + r) / 2;
            //  show(mid);
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        ll res = 1LL * (a * ans) + (1LL * b * ans) + (1LL * c * ans);
        // cout << res << '\n';
        int x = ans * 3;
        while (res > n)
        {
            if (res > n)
            {
                res -= c;
                x--;
            }
            if (res > n)
            {
                res -= b;
                x--;
            }
            if (res > n)
            {
                res -= a;
                x--;
            }
        }
        //  show(res);
        if (res != n)
            cout << ++x << '\n';
        else
            cout << x << '\n';
    }
}
