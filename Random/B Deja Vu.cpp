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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++)
        cin >> b[i];
    // sort(all(b), greater<int>());
    for (int i = 0; i < q; i++)
    {
        int ans = b[i] * b[i];
        int res = ans / 2;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % ans == 0)
            {
                a[j] += res;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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
