#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

    int a, b, c = 0;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            c++;
            a -= 4;
            b -= 1;
        }
        else if (a == b)
        {
            c++;
            a -= 4;
            b -= 4;
        }
        else
        {
            c++;
            a -= 1;
            b -= 4;
        }
    }
    cout << c << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
}
// time khub besi hoye jacce, tai binary search formula use korte hobe