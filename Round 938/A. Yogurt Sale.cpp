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
    int n, a, b;
    cin >> n >> a >> b;
    int x = b / 2;
    int ans;
    if (x < a)
    {
        ans = (n / 2) * b;
        if (n % 2 != 0)
            ans += a;
    }
    else
        ans = a * n;
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}