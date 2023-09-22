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
void solve(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m = n / 2;
    int sum = 0, sum2 = 0;
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    for (int i = m; i < n; i++)
    {
        sum2 += arr[i];
    }
    if (sum % 2 == 0 && sum2 % 2 == 0 || sum % 2 != 0 && sum2 % 2 != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
}