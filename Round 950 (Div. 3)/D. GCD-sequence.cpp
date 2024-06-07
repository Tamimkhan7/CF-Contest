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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int pre = 0, cnt = 0;

    for (int i = 0; i < a.size() - 1; i++)
    {
        int x = __gcd(a[i], a[i + 1]);
        // int mn = min(a[i], a[i + 1]);
        // int x = __gcd(mx, mn);

        if (pre <= x)
            pre = x;
        else
        {
            a.erase(a.begin() + i + 1);
            cnt++;
            if (cnt > 1)
                break;
            i--;
            for (auto x : a)
                cout << x << ' ';
            cout << '\n';
        }
    }

    cout << cn t << '\n';
    if (cnt == 1 or cnt == 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
