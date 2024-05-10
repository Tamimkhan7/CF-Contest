#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mx = max(c, d);
        int mn = min(c, d);
        int x = max(a, b);
        int y = min(a, b);
        int flag = 0, ans = 0;
        for (int i = mn; i <= mx; i++)
        {
            if (i == y || i == x)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            for (int i = y; i <= x; i++)
            {
                if (i == mn || i == mx)
                {
                    ans = 1;
                    break;
                }
            }
        }
        if (ans)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}