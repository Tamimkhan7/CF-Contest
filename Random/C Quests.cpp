#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int maxi = 0, sum = 0, bmax = 0;
    for (int i = 0; i < min(k, n); i++)
    {
        sum += a[i];
        bmax = max(bmax, b[i]);

        maxi = max(maxi, sum + bmax * (k - i - 1));
    }

    cout << maxi << endl;
}

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
}