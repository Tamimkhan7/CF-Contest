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
    vector<int> v, ans;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 != 0)
            ans.push_back(x);
        else
            v.push_back(x);
    }
    // cout << v.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
    {
        vector<int> p = ans[i];
        cout << p.size() << '\n';
        for (int j = 0; j < p.size(); j++)
        {
            for (int k = 0; k < v.size(); k++)
            {
                // string x = bitset<31>(v[k]);
            }
        }
    }
    // int x;
    // cin >> x;
    // cout << bitset<31>(x) << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}