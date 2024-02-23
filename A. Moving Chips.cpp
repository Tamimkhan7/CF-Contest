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
    deque<int> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];
    while (d.front() == 0)
        d.pop_front();
    while (d.back() == 0)
        d.pop_back();
    int cnt = 0;
    for (int i = 0; i < d.size(); i++)
    {
        if (d[i] == 0)
            cnt++;
    }
    cout << cnt << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}