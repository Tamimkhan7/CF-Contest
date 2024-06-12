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
    int n, m;
    cin >> n >> m;
    char a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    int x = 0, y = 0, res = -1;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '#')
                cnt++;
        }
        if (cnt > res)
        {
            res = cnt;
            x = i;
        }
    }
    int start = 0, end = 0;
    for (int i = x; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '#')
            {
                start = j;
                break;
            }
        }
    }
    // cout << start << '\n';
    if (res == 1)
    {
        cout << x << ' ' << start << '\n';
        return;
    }
    for (int i = x; i < n; i++)
    {
        for (int j = m; j >= 1; j--)
        {
            if (a[i][j] == '#')
            {
                end = j;
                break;
            }
        }
    }
    cout << x << ' ' << (start + end) / 2 << '\n';
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
