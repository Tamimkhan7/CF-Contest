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
    ll a, b, c;
    cin >> a >> b >> c;
    ll k = a + b + c;
    ll p = (a + b) * c;
    ll q = a * b * c;
    ll w = a * (c + b);
    if (k >= p && k >= q && k >= w)
    {
        cout << k << endl;
    }
    else if (p >= k && p >= q && p >= w)
    {
        cout << p << endl;
    }
    else if (q >= k && q >= p && q >= w)
    {
        cout << q << endl;
    }
    else
    {
        cout << w << endl;
    }
}
