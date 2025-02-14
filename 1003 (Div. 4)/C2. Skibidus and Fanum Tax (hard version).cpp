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
        if (is_sorted(all(a)))
        {
            cout << "YES" << '\n';
            continue;
        }
        sort(all(b));
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                int l = 0, r = m;
                while (l <= r)
                {
                    int mid = (1LL * l + r) / 2;
                    if (((i > 0 and b[mid] - a[i] >= a[i - 1]) and (i < n - 1 and b[mid] - a[i] <= a[i + 1])) || (i == 0 and b[mid] - a[i] <= a[i + 1]) || (i == n - 1 and b[mid] - a[i] >= a[i - 1]))
                    {
                        a[i] = b[mid] - a[i];
                        r = mid - 1;
                    }
                    else if (b[mid] - a[i] >= a[i])
                        r = mid - 1;
                    else
                        l = mid + 1;
                }
            }
            // for (int i = 0; i < n; i++)
            //     cout << a[i] << ' ';
            // cout << '\n';
        }
        if (is_sorted(all(a)))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}