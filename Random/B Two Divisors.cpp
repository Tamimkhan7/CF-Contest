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
int N = 1e9 + 5;
void solve()
{
    int a, b;
    cin >> a >> b;
    int x = __gcd(a, b);
    int ans = x * (a / x) * (b / x);
    if (ans == b)
        ans *= b / a;
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}