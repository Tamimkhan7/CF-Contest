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
    ll k, n, c;
    cin >> k >> n;
    if (k % 2 == 0)
        c = k / 2;
    else
        c = (k + 1) / 2;
    if (n <= c)
        cout << (n * 2) - 1;
    else
        cout << (n - c) * 2;
}
