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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        // sort(all(a));
        // reverse(all(a));
        // sort(all(b));
        int sum = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n and a[i] >= b[i + 1])
            {
                sum += a[i];
                sum2 += b[i + 1];
            }
        }
        sum += a[n - 1];

        cout << sum - sum2 << '\n';
    }
    return 0;
}