#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll ans = 0;
        for (int a = 1; a <= n; a++)
        {
            for (int b = 1; b * a <= n; b++)
            {
                int c = min((x - a - b), (n - a * b) / (a + b));
                // cout << c << ' ';
                if (c > 0)
                    ans += c;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
