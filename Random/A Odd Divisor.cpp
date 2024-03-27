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
#define nl '\n'
#define mod 1000000007
void solve()
{
    long long int n;
    cin >> n;
    int c = 0;
    if (n % 2 != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 != 0)
                {
                    c++;
                    break;
                }
            }
        }
        // cout << c << endl;
        if (c != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}