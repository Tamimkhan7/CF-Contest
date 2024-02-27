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
    map<int, int> mp;
    vector<int> d, dd;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
        mp[x]++;
    }
    // cout << mp[d[0]] << '\n';
    if (mp[d[0]] == 1)
    {
        cout << "YES" << '\n';
        return;
    }
    sort(all(d));
    for (int i = 0; i < n; i++)
    {
        if (d[i] % d[0])
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();
}