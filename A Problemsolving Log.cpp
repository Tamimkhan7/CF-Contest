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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> frq(26, 0);
        for (int i = 0; i < n; i++)
        {
            frq[(int)s[i] - 'A']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (frq[i] >= (i + 1))
                ans++;
        }
        cout << ans << '\n';
    }
}
