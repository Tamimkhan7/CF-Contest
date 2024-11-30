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
const int N = 1e6 + 9;
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mn = min(a, b);
        int mx = max(a, b);
        // show(mx);
        for (int i = mx; i <= mx * mn; i++)
        {
            if (i % a == 0 and i % b == 0)
            {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}