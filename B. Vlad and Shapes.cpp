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
    vector<int> v;
    while (n--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (auto x : s)
        {
            if (x == '1')
                cnt++;
        }
        // cout << cnt << '\n';
        if (cnt >= 1)
            v.push_back(cnt);
    }

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << "SQUARE" << '\n';
            return;
        }
        else
        {
            cout << "TRIANGLE" << '\n';
            return;
        }
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
