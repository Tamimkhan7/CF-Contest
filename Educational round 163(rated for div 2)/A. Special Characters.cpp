#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    if (n % 2)
    {
        cout << "NO" << '\n';
        return;
    }
    string s = "";
    while (n > 0)
    {
        s += "AA";
        n -= 2;
        if (n > 0)
        {
            s += "BB";
            n -= 2;
        }
    }
    cout << "YES" << '\n';
    cout << s << '\n';
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