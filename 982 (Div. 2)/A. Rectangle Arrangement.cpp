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
        int l = 0, r = 0;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            l = max(x, l);
            r = max(y, r);
        }
        cout << 2 * (l + r) << '\n';
    }
    return 0;
}