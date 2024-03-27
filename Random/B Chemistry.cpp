#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x * x)
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
bool check(string x, int n, int k)
{
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string s, x, ss;
    cin >> s;
    int ans = k / 2 + (k % 2);
    int res = k / 2;

    for (int i = ans; i < n - res; i++)
    {
        ss += s[i];
    }
    // cout << ss << '\n';
    string xp = ss;
    reverse(all(ss));
    if (xp == ss)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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
