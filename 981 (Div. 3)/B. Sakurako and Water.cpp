#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int M = 1e5 + 1;
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1][n + 1];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int mn = M;
            for (int k = i, j = 1; k <= n && j <= n; k++, j++)
            {
                if (a[k][j] < 0)
                    mn = min(mn, a[k][j]);
            }
            if (mn != M)
                ans += abs(mn);
        }

        for (int j = 2; j <= n; j++)
        {
            int mn = M;
            for (int k = 1, l = j; k <= n && l <= n; k++, l++)
            {
                if (a[k][l] < 0)
                    mn = min(mn, a[k][l]);
            }
            if (mn != M)
                ans += abs(mn);
        }

        cout << ans << '\n';
    }

    return 0;
}
