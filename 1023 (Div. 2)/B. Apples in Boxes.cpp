#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> f;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        f[v[i]]++;
    }
    sort(all(v));
    int mx = v[n - 1], mn = v[0];
    if (mx - mn > k + 1)
    {
        cout << "Jerry\n";
        return;
    }
    if (mx - mn > k and f[mx] > 1)
    {
        cout << "Jerry\n";
        return;
    }
    int ans = 0;
    for (auto x : v)
        ans += x;
    cout << (ans % 2 == 1 ? "Tom" : "Jerry") << '\n';
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