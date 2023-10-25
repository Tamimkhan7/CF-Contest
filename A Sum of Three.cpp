#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
typedef unsigned long long int llu;
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                ll x = i + j + k;
                if (i % 3 != 0 && j % 3 != 0 && k % 3 != 0)
                {
                    if (x == n)
                    {
                        cout << "YES" << endl;
                        cout << i << " " << j << " " << k << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}