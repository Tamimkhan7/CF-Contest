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
void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        long long int sum = 0, sum2 = 0;
        int l, r, k;
        cin >> l >> r >> k;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        for (int i = l - 1; i < r; i++)
        {
            sum2 += k;
            sum -= arr[i];
        }
         sum = sum + sum2;
        if (sum % 2 != 0)
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
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
}