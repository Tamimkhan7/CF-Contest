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

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= k)
        {
            int res = 0, res2 = 0;

            if (i > 0)
            {
                res += k - v[i - 1];
                for (int j = i - 1; j > 0; j--)
                    res += v[j] - v[j - 1];
            }

            res2 += v[i] - k;
            for (int j = i; j < n - 1; j++)
                res2 += v[j + 1] - v[j];

            ans = res + res2 + min(res, res2);
            cout << ans << '\n';
            return;
        }
    }

    ans += k - v[n - 1];
    for (int i = n - 1; i > 0; i--)
        ans += v[i] - v[i - 1];

    cout << ans << '\n';
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