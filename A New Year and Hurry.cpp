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
    ll n, k, m, sum = 5, l = 0, p = 0;
    cin >> n >> k;
    ll t = 240 - k;
    for (ll i = 1; i <= n; i++)
    {
        m = sum * i;
        l += m;
        p++;
        if (l > t)
        {
            p -= 1;
            break;
        }
    }
    // cout << l << endl;
    cout << p << endl;
}