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
    int flag = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        flag++;
        if (flag == 5)
            flag = 1;
        int x = 1, y = 1;
        // cout << flag << '\n';
        for (int j = 1; j <= 2 * n; j++)
        {
            if (flag <= 2)
            {
                if (x < 3)
                {
                    cout << "#";
                    x++;
                }
                else
                {
                    cout << ".";
                    y++;
                }
                if (x == 3)
                {
                    y = 1;
                    x++;
                }
                if (y == 3)
                {
                    x = 1;
                    y++;
                }
            }
            else
            {
                if (x < 3)
                {
                    cout << ".";
                    x++;
                }
                else
                {
                    cout << "#";
                    y++;
                }
                if (x == 3)
                {
                    y = 1;
                    x++;
                }
                if (y == 3)
                {
                    x = 1;
                    y++;
                }
            }
        }
        cout << '\n';
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