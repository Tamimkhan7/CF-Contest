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
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int sum = 0;
    if (n < k || (k - 1) > x)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            sum += i;
        }
        int p = n - k;
        if (x == k)
            x -= 1;
        p *= x;
        cout << sum + p << endl;
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
    return 0;
}