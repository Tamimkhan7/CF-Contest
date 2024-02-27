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
    vector<int> v(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans += v[i];
    }
    ll cnt = ans;
    if (ans % 3 == 0)
    {
        cout << 0 << '\n';
        return;
    }
    else if ((cnt + 1) % 3 == 0)
    {
        cout << 1 << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        ans -= v[i];
        if (ans % 3 == 0)
        {
            cout << 1 << '\n';
            return;
        }
        ans = cnt;
    }
    cout << 2 << '\n';
}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();
}