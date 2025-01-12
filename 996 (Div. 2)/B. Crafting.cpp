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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int total = 0, cnt = 0;
        int min_val = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                cnt++;
                total = b[i] - a[i];
            }
            else
                min_val = min(min_val, a[i] - b[i]);
        }
        if (cnt > 1)
        {
            cout << "NO" << '\n';
            continue;
        }

        if (min_val >= total)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}