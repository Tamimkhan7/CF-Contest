#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
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
        int n, f, k;
        cin >> n >> f >> k;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int x = a[f];
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == x)
                cnt++;
        }
        sort(a + 1, a + n + 1);
        reverse(a + 1, a + n + 1);
        vector<int> v;
        for (int i = k + 1; i <= n; i++)
            v.push_back(a[i]);

        int res = 0;
        for (auto p : v)
        {
            if (p == x)
                res++;
        }
        // cout << flag << '\n';
        if (res == cnt)
            cout << "NO" << '\n';
        else if (res != 0 and res != cnt)
            cout << "MAYBE" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}