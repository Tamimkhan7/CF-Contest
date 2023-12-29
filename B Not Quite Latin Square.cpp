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
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        if (a[0] == '?' and a[1] == 'A' and a[2] == 'B')
            cout << "C" << '\n';
        if (a[0] == '?' and a[1] == 'B' and a[2] == 'C')
            cout << "A" << '\n';
        if (a[0] == '?' and a[1] == 'A' and a[2] == 'C')
            cout << "B" << '\n';

        if (b[0] == '?' and b[1] == 'A' and b[2] == 'B')
            cout << "C" << '\n';
        if (b[0] == '?' and b[1] == 'B' and b[2] == 'C')
            cout << "A" << '\n';
        if (b[0] == '?' and b[1] == 'A' and b[2] == 'C')
            cout << "B" << '\n';

        if (c[0] == '?' and c[1] == 'A' and c[2] == 'B')
            cout << "C" << '\n';
        if (c[0] == '?' and c[1] == 'B' and c[2] == 'C')
            cout << "A" << '\n';
        if (c[0] == '?' and c[1] == 'A' and c[2] == 'C')
            cout << "B" << '\n';
    }
}