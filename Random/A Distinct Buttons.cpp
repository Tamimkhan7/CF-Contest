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
int32_t main()
{
    MTK;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(4);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a[0] |= (x < 0);
            a[1] |= (x > 0);
            a[2] |= (y < 0);
            a[3] |= (y > 0);
        }
        // cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << '\n';
        cout << (accumulate(a.begin(), a.end(), 0) <= 3 ? "YES" : "NO") << '\n';
    }
}