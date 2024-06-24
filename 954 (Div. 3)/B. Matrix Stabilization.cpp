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
int a[110][110];
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j <= m + 1; j++)
            a[i][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int mx = a[i + 1][j];
            mx = max(mx, a[i][j + 1]);
            mx = max(mx, a[i][j - 1]);
            mx = max(mx, a[i - 1][j]);
            if (mx > a[i][j])
            {
                cout << a[i][j] << ' ';
                continue;
            }
            a[i][j] = mx;
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
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