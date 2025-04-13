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
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int left = 0, right = 0;
        vector<pair<int, int>> v;
        m--;
        int i = 1;
        while (i <= n and r > right and l < left)
        {
            if (i % 2 == 0)
                right++;
            else if (i % 2 != 0)
                left--;
            i++;
            v.push_back({left, right});
        }
        while (i <= n and r > right)
        {
            right++;
            i++;
            v.push_back({left, right});
        }
        while (i <= n and l < left)
        {
            left--;
            i++;
            v.push_back({left, right});
        }
        // for (auto [x, y] : v)
        //     cout << x << ' ' << y << '\n';
        cout << v[m].first << ' ' << v[m].second << '\n';
    }
    return 0;
}