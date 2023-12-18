#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s, ssb, sb;
        cin >> x >> s;

        int k = 0, i = 0;
        for (int j = 0; j < n; j++)
        {
            sb = x.substr(i, j);
            if (sb == s)
            {
                k++;
                break;
            }
        }
        if (k != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 0, ct = 0;
            while (m > 0)
            {
                ans++;
                x += x;
                // cout << x << endl;
                if (x.size() >= s.size())
                {
                    for (int i = 0; i < x.size(); i++)
                    {
                        for (int j = 0; j <= x.size(); j++)
                        {
                            ssb = x.substr(i, j);
                            // cout << ssb << endl;
                            if (ssb == s)
                            {
                                ct++;
                                break;
                            }
                        }
                    }
                }
                m--;
            }
            if (ct != 0)
                cout << ans << endl;
            else
                cout << -1 << endl;
        }
    }
}
