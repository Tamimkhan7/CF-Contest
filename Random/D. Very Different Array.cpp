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
    int n, m;
    cin >> n >> m;
    deque<int> v, vp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        vp.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(vp.rbegin(), vp.rend());
    ll ans = 0, a, b;
    while (v.size() > 0)
    {
        a = abs(v.front() - vp.front());
        b = abs(v.back() - vp.back());
        if (a >= b)
        {
            ans += a;
            v.pop_front();
            vp.pop_front();
        }
        else
        {
            ans += b;
            v.pop_back();
            vp.pop_back();
        }
    }
    cout << ans << '\n';
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