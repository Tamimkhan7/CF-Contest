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
        string s, ss;
        cin >> s >> ss;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                x++;
        }
        for (int i = 0; i < n; i++)
        {
            if (ss[i] == '1')
                y++;
        }

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' or ss[i] == '1')
            {
                if (s[i] == ss[i])
                    flag++;
            }
        }
        int mx = max(x, y);
        cout << mx - flag << '\n';
    }
}