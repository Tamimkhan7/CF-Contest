#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    MTK;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool ok = true;
        for (int i = 0; i < n - 1; ++i)
        {
            int red = min(a[i], a[i + 1]);
            a[i] -= red;
            a[i + 1] -= red;
            if (a[i] > a[i + 1])
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
