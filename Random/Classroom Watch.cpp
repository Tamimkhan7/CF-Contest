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
    faster;
    ll n;
    cin >> n;
    if (n % 10 != 0)
    {
        ll q = n % 10;
        cout << q << endl;
        ll w = n / 2;
        if (w - q >= q)
        {
            ll p = w / 2;
            ll m = w + p;
            cout << m << endl;
        }
        else
        {
            cout << w << endl;
        }
    }
    else
    {
        ll q = n % 10;
        cout << q << endl;
    }
}
