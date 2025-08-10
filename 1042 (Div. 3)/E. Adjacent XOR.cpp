#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
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
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i < n; ++i)
            cin >> b[i];

        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != b[i])
            {
                a[i] = a[i] ^ a[i + 1];
                if (a[i] != b[i])
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok && a[n - 1] == b[n - 1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
