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
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, k, m, p, q;
        cin >> n >> a >> b;
        k = (b / 2) + (b % 2);
        // cout << k << endl;
        if (k > a)
        {
            m = n * a;
        }
        else
        {
            p = n / 2;
            p *= b;
            q = n % 2;
            q *= a;
            m = q + p;
        }
        cout << m << endl;
    }
}