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
        int x = a + b, ans = 0;
        ll sum = 0;
        for (int i = 1; i <= x; i++)
        {
            if ((sum + i) <= x)
            {
                ans++;
                sum += i;
            }
            else
                break;
        }
        cout << ans << '\n';
    }
    return 0;
}