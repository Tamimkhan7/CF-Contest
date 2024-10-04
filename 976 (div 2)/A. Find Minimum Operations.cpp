#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
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
        int n, k;
        cin >> n >> k;
        int x = 0, cnt = 0;
        if (k == 1)
            cnt = n;
        else
        {
            while (n)
            {
                cnt += n % k;
                n /= k;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}

/* else
        {
            while (n > 0)
            {
                if (pow(k, x) > n)
                {
                    cnt++;
                    ll pw = pow(k, (x - 1));
                    n -= pw;
                    x = -1;
                }
                x++;
            }
        }*/