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
        int n, m;
        cin >> n >> m;
        int v[n][m];
        vector<pair<int, ll>> ar;

        for (int i = 0; i < n; i++)
        {
            ll pref_sum = 0;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                pref_sum += x;
                v[i][j] = x;
            }
            ar.push_back({pref_sum, i});
        }

        sort(all(ar));
        reverse(all(ar));
        ll ans = 0, pref_sum = 0;
        for (auto [sum, i] : ar)
        {
            for (int j = 0; j < m; j++)
            {
                pref_sum += v[i][j];
                ans += pref_sum;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}