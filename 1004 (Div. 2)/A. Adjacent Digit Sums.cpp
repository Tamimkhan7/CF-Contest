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
        int x, y;
        cin >> x >> y;
        int a = x + 1;
        int digit_sum = 0, digit_sum_x = 0;
        while (x > 0)
        {
            digit_sum_x += x % 10;
            x /= 10;
        }

        while (a > 0)
        {
            digit_sum += a % 10;
            a /= 10;
        }
        if (digit_sum - digit_sum_x == y)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
