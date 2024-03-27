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
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1), vv(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        vv[i] = v[i];
    }
    sort(vv.rbegin(), vv.rend());
    for (int i = 0; i < n; i++)
    {
        int x = vv[i];
        // cout << x << ' ';
        auto it = find(all(v), x) - v.begin();
        cout << x + it << ' ';
    }
    cout << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}