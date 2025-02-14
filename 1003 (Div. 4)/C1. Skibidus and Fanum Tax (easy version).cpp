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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x;
        cin >> x;

        bool ok = true;
        int val = min(a[0], x - a[0]);
        //show(val);
        for (int i = 1; i < n; i++)
        {
            if (min(a[i], x - a[i]) >= val)
                val = min(a[i], x - a[i]);
            else if (max(a[i], x - a[i]) >= val)
                val = max(a[i], x - a[i]);
            else
            {
                ok = false;
                break;
            }
            //cout << a[i] << ' ' << val << '\n';
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