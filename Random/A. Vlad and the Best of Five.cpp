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
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (auto x : s)
    {
        if (x == 'A')
            a++;
        else
            b++;
    }
    if (a > b)
        cout << "A" << '\n';
    else
        cout << "B" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}