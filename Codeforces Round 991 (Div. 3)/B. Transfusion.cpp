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
        vector<int> v(n + 1);
        ll sum = 0, even = 0, odd = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (i % 2 == 0)
                even += x;
            else
                odd += x;
        }
        int o = (n + 1) / 2, e = n / 2;

        if (odd * e == even * o and odd % o == 0 and even % e == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
