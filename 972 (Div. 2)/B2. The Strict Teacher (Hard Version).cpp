#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(all(a));
        while (q--)
        {
            int x;
            cin >> x;
            int ans = -1;
            auto lw = lower_bound(all(a), x) - a.begin();
            if (lw == 0)
                ans = a[0] - 1;
            else if (lw == m)
                ans = n - a[m - 1];
            else
                ans = (a[lw] - a[lw - 1]) / 2;
            cout << ans << '\n';
        }
    }
    return 0;
}