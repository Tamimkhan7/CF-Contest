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
    int total_p = 0, total_b = 0;
    while (t--)
    {
        char x;
        int val;
        cin >> x >> val;
        if (x == 'P')
            total_p += val;
        else if (x == 'B')
        {
            total_b += val;
            if (total_p < total_b)
            {
                cout << "YES" << '\n';
                total_p = 0, total_b = 0;
            }
            else
                cout << "NO" << '\n';
        }
        // cout << total_p << ' ' << total_b << '\n';
    }
    return 0;
}