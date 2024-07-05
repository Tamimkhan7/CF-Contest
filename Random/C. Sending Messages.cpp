#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
bool solve()
{
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    ll pre = 0;
    for (int i = 1; i <= n; i++)
    {
        if (f <= 0)
            return false;
        ll p = (v[i] - pre) * a;
        f -= min(p, 1LL * b);
        pre = v[i];
    }
    return (f > 0);
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        cout << (solve() ? "YES" : "NO") << '\n';
}

/* ll ans = 1LL * n * b;
    if ((ans <= f and a < b) || ans < f)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';*/