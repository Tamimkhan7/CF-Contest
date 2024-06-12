#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int ans = -1e6, p = n, value = 0;
    for (int j = n; j >= 2; j--)
    {
        int res = 0;
        for (int i = 1; i <= 100; i++)
        {
            if ((j * i) <= p)
                res += (j * i);
            else
                break;
        }
        // cout << res << '\n';
        if (ans < res)
        {
            value = j;
            ans = res;
        }
    }
    cout << value << '\n';
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
