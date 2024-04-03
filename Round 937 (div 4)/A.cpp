#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef long long int ll;
#define mod 1000000007
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b and b < c)
            cout << "STAIR" << '\n';
        else if (a < b and b > c)
            cout << "PEAK" << '\n';
        else
            cout << "NONE" << '\n';
    }
    return 0;
}
