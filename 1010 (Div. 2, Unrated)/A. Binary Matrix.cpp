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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int one = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '1')
                    one++;
            }
            //show(one);
            if (one & 1)
                cnt++;
        }
        int cnt2 = 0;
        for (int i = 0; i < m; i++)
        {
            int one = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] == '1')
                    one++;
            }
           // show(one);
            if (one & 1)
                cnt2++;
        }
        cout << max(cnt, cnt2) << '\n';
    }
    return 0;
}