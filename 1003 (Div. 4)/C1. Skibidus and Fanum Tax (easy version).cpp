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
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];

        // show(x);
        if (is_sorted(all(a)))
        {
            cout << "YES" << '\n';
            continue;
        }
        // for (int i = 0; i < n; i++)
        //     cout << a[i] << ' ';
        // cout << '\n';
        sort(all(b));
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                // cout << a[i] << ' ' << x << ' ' << x - a[i] << '\n';
                a[i] = b[0] - a[i];
                if (i > 0 and a[i] < a[i - 1])
                {
                    ok = false;
                    break;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        //     cout << a[i] << ' ';
        // cout << '\n';
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}