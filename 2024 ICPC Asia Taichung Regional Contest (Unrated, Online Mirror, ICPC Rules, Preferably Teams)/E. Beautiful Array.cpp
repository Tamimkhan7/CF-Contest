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
    int a, b, c;
    cin >> a >> b;
    if (a == b)
    {
        cout << 1 << '\n';
        cout << a << '\n';
    }
    else if ((a < 0 and b < 0) || (a > 0 and b > 0))
    {
        cout << 3 << '\n';
        int x = a * 3;
        int y = b * 2;
        cout << b << ' ' << b << ' ' << x - y << '\n';
    }
    else
    {
        int y;
        cout << 3 << '\n';
        int x = a * 3;
        (b < 0 ? x += b : x -= b);
        if (b > 0 and (-x) > b)
        {
            y = b;
            x -= b;
        }
        else
        {
            y = b;
            x += b;
            int p = (b + y) * 2 + (-x);
            x = -p;
        }

        cout << b << ' ' << y << ' ' << x << '\n';
    }
    return 0;
}