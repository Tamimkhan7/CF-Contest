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
    deque<int> d, v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    while (v.size() > 0)
    {
        int x = v.front();
        d.push_back(x);
        v.pop_front();
        if (v.size() > 0)
        {
            int y = v.back();
            d.push_back(y);
            v.pop_back();
        }
    }
    vector<int> vc;
    for (int i = 0; i < d.size() - 1; i++)
    {
        int x = d[i] + d[i + 1];
        vc.push_back(x);
    }
    int xp = vc[0];
    for (int i = 1; i < vc.size(); i++)
    {
        if (xp != vc[i])
        {
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}