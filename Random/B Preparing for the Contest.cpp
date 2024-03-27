#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 1; i <= n; i++)
        {
            v[i - 1] = i;
        }
        reverse(v.begin(), v.begin() + (n - k));
        for (auto i : v)
            cout << i << ' ';
        cout << '\n';
    }
}