#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total_sum += v[i];
    }
    cout << total_sum - 2 * v[n - 2] << '\n';
    // if (n == 2)
    // {
    //     cout << v[1] - v[0] << '\n';
    //     return;
    // }

    // int mx_rating = 0;
    // for (int i = 0; i < n - 2; i++)
    // {
    //     if (v[i] > 0)
    //         mx_rating += v[i];
    //     else
    //         mx_rating -= v[i];
    // }
    // cout << v[n - 1] - v[n - 2] + mx_rating << '\n';

    // ll mx = v[0] - (total_sum - v[0]);
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}