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
        int n, k;
        cin >> n >> k;
        vector<pair<int, pair<int, int>>> v;
        for (int i = 0; i < n; i++)
        {
            int l, r, val;
            cin >> l >> r >> val;
            v.push_back({l, {r, val}});
        }
        sort(all(v));
        for (int i = 0; i < n; i++)
        {
            int l = v[i].first, r = v[i].second.first, val = v[i].second.second;
            if (l <= k and k <= r)
                k = max(k, val);
        }
        cout << k << '\n';
    }
    return 0;
}