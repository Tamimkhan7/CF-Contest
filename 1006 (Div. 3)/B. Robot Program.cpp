#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define show(x) cout << #x << ' ' << x << endl
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        ll ans = 0, steps = 0;
        bool ok = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                x--;
            else
                x++;
            k--;
            if (x == 0)
            {
                ans++;
                ok = true;
                break;
            }
        }

        if (ok)
        {
            for (int i = 0; i < n; i++)
            {

                if (s[i] == 'L')
                    x--;
                else
                    x++;
                steps++;
                // k--;
                //it's my think one cycle is exist.
                if (x == 0)
                {
                    ans += k / steps;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }
}
