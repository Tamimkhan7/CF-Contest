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
    while (t--)
    {
        ll n, ans = 0, sum = 0;
        cin >> n;
        vector<ll> v(n), dp(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                dp[i] += dp[i - 1] + i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += dp[i];
        }
        cout << sum << '\n';
    }
}
// tamim