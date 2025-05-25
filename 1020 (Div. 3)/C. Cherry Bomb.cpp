#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int x = -1;
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                if (b[i] < 0 || b[i] > k)
                {
                    ok = false;
                    break;
                }
                int sum = a[i] + b[i];
                if (x == -1)
                    x = sum;
                else if (x != sum)
                {
                    ok = false;
                    break;
                }
            }
        }

        if (!ok)
        {
            cout << 0 << '\n';
            continue;
        }

        if (x != -1)
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] == -1)
                {
                    int need = x - a[i];
                    if (need < 0 || need > k)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            cout << (ok ? 1 : 0) << '\n';
        }
        else
        {
            int l = a[0], r = a[0] + k;
            for (int i = 1; i < n; i++)
            {
                l = max(l, a[i]);
                r = min(r, a[i] + k);
            }
            cout << max(0LL, r - l + 1) << '\n';
        }
    }

    return 0;
}
