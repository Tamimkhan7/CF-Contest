#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll int long long
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a + b + c;

    if (ans % 2 != 0)
    {
        cout << -1 << '\n';
        return;
    }
    int res = a + b;
    res = min(ans / 2, res);
    cout << res << '\n';
}
int main()
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
