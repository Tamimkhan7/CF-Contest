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
const ll MOD = 998244353;

int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        // yes or no
        vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
        dp[1][0] = 1;
        dp[1][1] = 1;

        for (int i = 2; i <= n; i++)
        {
            if (a[i - 1] <= a[i] and b[i - 1] <= b[i])
                dp[i][0] = (dp[i][0] + dp[i - 1][0]) % MOD;

            if (a[i - 1] <= b[i] and b[i - 1] <= a[i])
                dp[i][1] = (dp[i][1] + dp[i - 1][0]) % MOD;

            if (b[i - 1] <= a[i] and a[i - 1] <= b[i])

                dp[i][0] = (dp[i][0] + dp[i - 1][1]) % MOD;

            if (b[i - 1] <= b[i] and a[i - 1] <= a[i])
                dp[i][1] = (dp[i][1] + dp[i - 1][1]) % MOD;
        }

        ll ans = (dp[n][0] + dp[n][1]) % MOD;
        cout << ans << "\n";
    }
    return 0;
}