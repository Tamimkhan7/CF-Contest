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
    if (n < 7 || n == 9)
        cout << "NO" << '\n';
    else
    {
        cout << "YES" << '\n';
        if ((n - 3) % 3 == 0)
            cout << 1 << ' ' << 4 << ' ' << n - 5 << '\n';
        else
            cout << 1 << ' ' << 2 << ' ' << n - 3 << '\n';
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