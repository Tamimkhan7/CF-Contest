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
    deque<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = 1;
    for (int i = 0; i < n; i++)
        ans *= v[i];

    string s;
    cin >> s;
    deque<char> d;
    for (auto x : s)
        d.push_back(x);
    while (!d.empty())
    {
        // cout << ans << ' ';
        cout << ans % m << ' ';
        if (d.front() == 'L')
        {
            int x = v.front();
            // cout << d.front() << '\n';
            d.pop_front();
            v.pop_front();
            ans /= x;
        }
        else
        {
            int x = v.back();
            // cout << d.front() << '\n';
            d.pop_front();
            v.pop_back();
            ans /= x;
        }
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