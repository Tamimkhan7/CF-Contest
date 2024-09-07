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
    int w, h, n;
    cin >> w >> h >> n;   
    int ans = 1;
    while (w % 2 == 0 || h % 2 == 0)
    {
        if (w % 2 == 0)
        {
            ans *= 2;
            w /= 2;
        }
        if (h % 2 == 0)
        {
            ans *= 2;
            h /= 2;
        }
        if (ans >= n)
            break;
    }
    // cout << ans << '\n';
    if (ans >= n)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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