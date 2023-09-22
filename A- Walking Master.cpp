#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll dx = abs(c - a);
        // cout << dx << endl;
        ll dy = abs(d - b);
        // cout << dy << endl;
        if ((dx - dy) % 2 != 0)
            if (dx > dy)
                cout << "-1" << endl;
            else
                cout << (dx + abs(dx - dy)) << endl;

        else
            cout << (dx + abs(dx - dy)) << endl;
        // cout << max(dx, dy) << endl;
    }
}