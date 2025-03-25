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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.rbegin(), v.rend());
        int ans = 0, cnt = 0, val = 1e9 + 9;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= x)
            {
                ans++;
                continue;
            }
            cnt++;
            val = min(val, v[i]);
            if (1LL * cnt * val >= x)
            {
                ans++;
                cnt = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}