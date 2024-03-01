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
    if (n % 15 == 0)
    {
        cout << n / 15 << '\n';
        return;
    }
    else if (n % 10 == 0)
    {
        cout << n / 10 << '\n';
        return;
    }
    else if (n % 6 == 0)
    {
        cout << n / 6 << '\n';
        return;
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