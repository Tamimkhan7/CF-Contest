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
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int len = 1; len <= n; len++)
        {
            if (n % len == 0)
            {
                // cout << "len " << len << '\n';
                int sum = 0;
                for (int r = 0; r < len; r++)
                {
                    vector<int> cnt(26, 0);
                    int mx = 0;
                    for (int i = r; i < n; i += len)
                    {
                        int c = int(s[i] - 'a');
                        cnt[c]++;
                        // cout << "cnt[c] " << cnt[c] << '\n';
                        mx = max(mx, cnt[c]);
                    }
                    sum += mx;
                }
                if (sum >= n - 1)
                {
                    cout << len << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}
// clear to the question and solution, if can't clear everything you will mara in the next contest