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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> even, odd;
        for (int i = 0, j = 1; i < n, j < n; j += 2, i += 2)
        {
            odd.push_back(a[i]);
            even.push_back(a[i]);
        }
        int p_even[(n / 2) + 2], p_odd[(n / 2) + 2];
        p_even[0] = even[0];
        for (int i = 1; i < even.size(); i++)
        {
            p_even[i] = p_even[i - 1] + even[i];
        }
        p_odd[0] = odd[0];
        for (int i = 1; i < odd.size(); i++)
        {
            p_odd[i] = p_odd[i - 1] + odd[i];
        }
    }
}