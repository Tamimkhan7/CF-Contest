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
    int n, m, k = 0, c, ans;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int p = arr[m - 1] - arr[0];
    for (int i = n; i <= m; i++)
    {
        // i = 4, n = 4
        ans = abs(arr[i - 1] - arr[i - n]);
        p = min(p, ans);
    }
    cout << p << endl;
}
