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
        int n;
        cin >> n;
        vector<int> v(2 * n + 2, 0), f(2 * n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int x;
                cin >> x;
                f[x]++;
                v[i + j] = x;
            }
        }
        // for (int i = 1; i <= (n * 2); i++)
        //     cout << i << ' ' << v[i] << '\n';
        // cout << '\n';

        for (int i = 1; i <= 2 * n; i++)
        {
            if (f[i] == 0)
            {
                v[1] = i;
                break;
            }
        }

        for (int i = 1; i <= 2 * n; i++)
            cout << v[i] << ' ';
        cout << '\n';
    }
    return 0;
}