#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            int a = v[i];
            int b = (i == n - 1 ? v[n - 2] : v[n - 1]);
            for (int j = 0; j < n; j++)
                b = __gcd(b, v[j]);

            if (a != b)
            {
                ok = true;
                cout << "Yes\n";
                for (int k = 0; k < n; k++)
                {
                    if (i == k)
                        cout << 2 << " ";
                    else
                        cout << 1 << " ";
                }
                cout << "\n";
            }
            if (ok)
                break;
        }

        if (!ok)
            cout << "No\n";
    }
    return 0;
}