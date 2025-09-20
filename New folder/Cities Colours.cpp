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
    vector<int> w(n), c(n);
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        if (i == 0)
            continue;
        res += w[i] - k;
        // show(res);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[c[i]] += w[i];

    ll mx = 0, idx;
    for (auto [x, y] : mp)
    {
        // cout << x << ' ' << y << '\n';
        if (mx < y)
        {
            mx = y;
            idx = x;
        }
    }
    ll baki = k;
    for (auto [x, y] : mp)
    {
        if (idx != x)
            baki += y;
    }
    ll temp = (baki - k) - mx;
    //  show(temp), show(res), show(baki);
    if (mx > baki)
        cout << mx - baki << '\n';
    else if (temp < 0 and res < 0)
        cout << max(temp, res) << '\n';
    else
        cout << temp << '\n';
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