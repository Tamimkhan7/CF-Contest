#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define vc v.clear()
#define sz v.size()
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int c = 0;
    if (s.size() < 2)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
            c++;
    }
    if (c == n - 1)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        string xx;
        for (int i = 0, j = 0; i < n, j < m; i++, j++)
        {
            if (s[i] != t[j])
            {
                int x = i;
                // cout << x << endl;
                s.erase(s.begin() + x);
                s[i] = t[j];
            }
        }
        cout << s << endl;
    }
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