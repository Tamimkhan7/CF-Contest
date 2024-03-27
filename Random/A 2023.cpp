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
    int n, k;
    cin >> n >> k;
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans *= x;
    }
    if (2023 % ans == 0)
    {

        cout << "YES" << '\n';
        cout << 2023 / ans << ' ';
        for (int i = 1; i < k; i++)
            cout << 1 << ' ';
        cout << '\n';
    }
    else
        cout << "NO" << '\n';
}
int32_t
main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}