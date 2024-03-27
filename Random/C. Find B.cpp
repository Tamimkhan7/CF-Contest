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
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0, sum2 = 0;
        for (int i = l; i <= r; i++)
        {
            if (i % 2)
                sum += a[i];
            else
                sum2 += a[i];
        }
        cout << sum << ' ' << sum2 << '\n';
        if (sum != sum2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}