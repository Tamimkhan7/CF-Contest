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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(all(a));
        while (q--)
        {
            int x;
            cin >> x;
            int ans = -1;
            auto lw = lower_bound(all(a), x) - a.begin();
            if (lw == 0)
                ans = a[0] - 1;
            else if (lw == m)
                ans = n - a[m - 1];
            else
                ans = (a[lw] - a[lw - 1]) / 2;
            cout << ans << '\n';
        }
    }
    return 0;
}