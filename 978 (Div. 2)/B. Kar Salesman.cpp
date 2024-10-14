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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans += v[i];
        }

        int mx = *max_element(all(v));
        ans = (ans + x - 1) / x;
        // cout << ans << ' ' << mx << '\n';
        cout << max(ans, 1LL * mx) << '\n';
    }
    return 0;
}