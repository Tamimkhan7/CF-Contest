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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                ans++;
            }
            else if ((abs(v[i] - v[i + 1])) <= 1)
            {
                ans++;
            }
        }
        if (ans == n - 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}