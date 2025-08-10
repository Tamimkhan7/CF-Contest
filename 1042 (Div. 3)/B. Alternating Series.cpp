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

        if (n % 2 == 0)
        {
            for (int i = 1; i < n; i++)
            {
                if (i % 2 != 0)
                    cout << -1 << ' ';
                else
                    cout << 3 << ' ';
            }
            cout << 2 << '\n';
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 != 0)
                    cout << -1 << ' ';
                else
                    cout << 3 << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}