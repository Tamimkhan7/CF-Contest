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
    ll n;
    cin >> n;
    ll a[n], b[n];
    ll a_sum = 0, b_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a_sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b_sum += b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    cout << min((a[0] * n + b_sum), (b[0] * n + a_sum)) << endl;
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