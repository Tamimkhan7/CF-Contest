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
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    ll mn = 1e9 + 7;
    ll x = 0, my_point;
    while (t--)
    {
        ll a, b, r;
        cin >> a >> b >> r;
        while (x <= r)
        {
            ll ans = abs((a ^ x) - (b ^ x));
            cout << ans << '\n';
            if (mn >= ans)
            {
                mn = ans;
                my_point = x;
            }
            x++;
        }
    }
    cout << x << '\n';
}