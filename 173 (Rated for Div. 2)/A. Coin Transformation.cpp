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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << n << '\n';
            continue;
        }
        // ll x = n % 4;
        // n -= x;
        // show(n);
        ll ans = 0;
        while (n >= 4)
        {

            ans += 2;
            n /= 4;
            // x = n % 4;
            // n -= x;
        }
        cout << ans << '\n';
    }
    return 0;
}