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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n == k)
    {
        int ans = 1;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] != ans)
            {
                cout << ans << '\n';
                return;
            }
            ans++;
        }
        cout << ans << '\n';
        return;
    }

    int ans = 0;
    for (int i = n - k + 1; i > 0; i--)
        ans = max(ans, v[i]);
    if (ans != 1)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}