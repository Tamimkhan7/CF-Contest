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
    int n, a, q;
    string s;
    cin >> n >> a >> q >> s;
    int flag = 0;
    for (int i = 0; i < q; i++)
    {
        if (s[i] == '+')
            a++;
        if (s[i] == '-' and s[i + 1] == '+')
            flag = 1;
    }
    if (a == n and flag != 0)
        cout << "MAYBE" << '\n';
    else if (a >= n)
        cout
            << "YES" << '\n';
    else
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