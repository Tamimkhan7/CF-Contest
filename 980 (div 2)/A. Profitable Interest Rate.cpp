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
        int a, b;
        cin >> a >> b;
        if (a >= b)
            cout << a << '\n';
        else
        {
            ll x = b - a;
            a -= x;
            x *= 2;
            b -= x;
            // cout << a << ' ' << b << '\n';
            if (a >= b and a > 0)
                cout << a << '\n';
            else
                cout << 0 << '\n';
        }
    }
    return 0;
}