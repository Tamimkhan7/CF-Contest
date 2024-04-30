#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > b[i])
        {
            ans++;
            for (int x = n; x > i; x--)
                a[x] = a[x - 1];
            // for (auto x : a)//ulta kore cinta korte hobe
            //     cout << x << ' ';
            // cout << '\n';
        }
    }
    cout << ans << '\n';
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
