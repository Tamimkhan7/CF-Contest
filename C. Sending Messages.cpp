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
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mn;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] >= v[i + 1])
        {
            cout << "NO" << '\n';
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {

        int x = (v[i] - v[i - 1]) * a;
        if (x > 0)
            mn = min(x, b);
        else
            mn = b;
        f -= mn;
    }
    // cout << f << '\n';
    if (f > 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}