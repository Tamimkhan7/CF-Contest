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

        int ans = 2;
        for (int i = 2; i <= n; i++)
        {
            if (max(a[i - 1], b[i - 1]) <= min(a[i], b[i]))
                ans = (1LL * ans * 2) % MOD;
        }
        cout << ans << '\n';
    }
    return 0;
}