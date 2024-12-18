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
    vector<int> v(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i != j and (abs(v[i] - v[j]) % k != 0))
                cnt++;
        }
        if (cnt == n - 1)
        {
            ans = i;
            break;
        }
    }
    if (ans > 0)
    {
        cout << "YES" << '\n';
        cout << ans << '\n';
    }
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